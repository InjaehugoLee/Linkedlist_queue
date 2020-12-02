#include <iostream>
#include "queue.h"
using namespace std;

void Queue::Push(int item) {
	if (Full())
	{
		cout << "큐가 가득 찼습니다." << endl;
		return;
	}
	if (!head)
	{
		head = tail = new Node(item);
		return;
	}
	tail->next = new Node(item);
	tail = tail->next;
}
int Queue::Pop() {
	if (Empty())
	{
		cout << "큐가 비었습니다." << endl;
		return -1;
	}
	int ret = head->data;
	Node* n = head->next;
	delete head;
	head = n;
	return ret;
}
int Queue::Number() {
	Node* t = head;
	int count = 0;
	while (t)
	{
		t = t->next;
		count++;
	}
	return count;
}

int Queue::Empty() {
	return(Number() == 0);
}

int Queue::Full() {
	return(Number() == Queuesize);
}