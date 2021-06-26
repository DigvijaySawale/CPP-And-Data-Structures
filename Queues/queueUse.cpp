//driver code for queueUsingArray.h

#include<iostream>
using namespace std;

#include "queueUsingArrays.h"

int main()
{
	QueueUsingArrays q1(5);
	
	q1.enqueue(10);
	q1.enqueue(20);
	q1.enqueue(30);
	q1.enqueue(40);
	q1.enqueue(50);
	q1.enqueue(60);
	
	cout << q1.front() << endl;
	
	cout << q1.dequeue() << endl;
	cout << q1.dequeue() << endl;
	cout << q1.dequeue() << endl;
	
	cout << q1.getSize() << endl;
	cout << q1.isEmpty() << endl;
	
	
}
