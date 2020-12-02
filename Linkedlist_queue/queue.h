#include <iostream>
using namespace std;

class Node {
public:
	int data;
	Node* next;

	Node(int n = 0) {
		data = n;
		next = 0;
	}
};

class Queue {
	Node* head;
	Node* tail;
	int Queuesize;
public:
	Queue(int size = 5)
	{
		Queuesize = size;
		head = tail = 0;
	}
	~Queue() {
		if (!Empty())
		{
			Node* t = head;
			while (head)
			{
				t = head->next;
				cout << "delete : " << head->data << endl;
				delete head;
				head = t;
			}
		}
	}
	void Push(int item);
	int Pop();
	int Number();
	int Empty();
	int Full();
};
