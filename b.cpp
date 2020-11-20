#include <iostream>
using namespace std;

struct Node {
	int data;
	struct Node *next;
};

Node *getNode(int data)
{
	Node *newNode = new Node();
	
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

void printList(struct Node *head) {
	int k = 0;
	while(head != NULL) {
		cout << "\nL" << k + 1 << ": " << head->data;
		head = head->next;
		k++;
		cout << endl;
	}
}

int main() 
{
	int N, q;
	Node *head = NULL;
	
	cin >> N >> q;
	for(int i = 0; i < N; i++) {
		head = getNode(i+1);
		//head->next = head;
	}
	cout << endl;
	
	printList(head);
}
