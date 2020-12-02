#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include "queue.h"
using namespace std;

void main() {
	int i = 100;
	Queue intQueue;

	intQueue.Push(i++);
	intQueue.Push(i++);
	intQueue.Push(i++);
	intQueue.Push(i++);
	intQueue.Push(i++);
	intQueue.Push(i++);
	intQueue.Push(i++);

	cout << intQueue.Pop() << endl;
	cout << intQueue.Pop() << endl;
	cout << intQueue.Pop() << endl;
	cout << intQueue.Pop() << endl;
	cout << intQueue.Pop() << endl;
	cout << intQueue.Pop() << endl;
	/*cout << intQueue.Pop() << endl;
	cout << intQueue.Pop() << endl;
	cout << intQueue.Pop() << endl;*/


}