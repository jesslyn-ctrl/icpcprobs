#include <iostream>
#include <string.h>
using namespace std;

string trim(const string &str) {
	size_t first = str.find_first_not_of(' ');
	
	if(string::npos == first)
		return str;
	
	size_t last = str.find_last_not_of(' ');
	
	return str.substr(first, (last - first + 1));
}

int main()
{
	int N, A, B;
	int sumA = 0, countB = 0;
	string Astr, Bstr;
	
	cin >> N;
	
	int Students[N];
	for(int i = 0; i < N; i++) {
		cin >> Students[i];
	}
	
	cin >> A;
	getline(cin, Astr);
	
	cin >> B;
	getline(cin, Bstr);

	if(trim(Astr) == "right" || trim(Astr) == "left" || trim(Bstr) == "right" || trim(Bstr) == "left") {
		if(trim(Astr) == "right") {
		for(int j = A - 1; j < N; j++)
			sumA += Students[j];
		}
		if(trim(Astr) == "left") {
			for(int j = A - 1; j >= 0; j--)
			sumA += Students[j];
		}
		
		if(trim(Bstr) == "right") {
			for(int j = B - 1; j < N; j++) {
				if(Students[j] == 0)
					countB++;
			}
			
		}
		if(trim(Bstr) == "left") {
			for(int j = B - 1; j >= 0; j--) {
				if(Students[j] == 0)
					countB++;
			}
			
		}	
		cout << sumA << " " << countB;	
	}
	else
		cout << "ERROR!";	
		
}
