//using built-in queue
//standard template library
//template for queue which can be used just by including the header file

#include<iostream>
#include<queue>
using namespace std;

int main()
{
	queue <char> q;
	
	q.push(70);      //inserting the element
	q.push(71);
	q.push(72);
	q.push(73);
	
	cout << q.size() << endl;      //no of elements
	cout << q.front() << endl;     //first element
	
	q.pop();      //removing the first element
	q.pop();
	
	cout << q.front() << endl;
	cout << q.size() <<endl;
	
	cout << q.empty() << endl;      //check if queue is empty or not
	
	
}
