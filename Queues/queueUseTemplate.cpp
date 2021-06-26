//driver code for templateQueue.h
//template queue

#include<iostream>
using namespace std;

#include "templateQueue.h"

int main()
{
	QueueUsingArrays <char> q1(5);
	
	q1.enqueue(70);
	q1.enqueue(72);
	q1.enqueue(73);
	q1.enqueue(74);
	q1.enqueue(80);
	q1.enqueue(76);
	
	cout << q1.front() << endl;
	
	cout << q1.dequeue() << endl;
	cout << q1.dequeue() << endl;
	cout << q1.dequeue() << endl;
	
	cout << q1.getSize() << endl;
	cout << q1.isEmpty() << endl;
	
	
}
