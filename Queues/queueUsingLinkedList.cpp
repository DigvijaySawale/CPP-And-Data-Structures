//queue using linked list
//queue of integers

#include<iostream>
using namespace std;

//creating the node
class Node
{
	public:
		int data;
		Node *next;
		
		Node(int data)
		{
			this -> data = data;
			next = NULL;
		}
};

//creating class for queue
class QueueUsingLL
{
	Node *head;    //exit point 
	Node *tail;    //entry point 
	int size;     //no of elements in queue
	
	public:
		QueueUsingLL()
		{
			head = NULL;
			tail = NULL;
			size = 0;
		}
		
		//to return no of elements in queue
		int getSize()
		{
			return size;
		}
		
		//check if queue is empty or not
		bool isEmpty()
		{
			return size == 0;
		}
		
		//to insert element
		void enqueue(int dt)
		{
			Node *newnode = new Node(dt);
			if(head == NULL)
			{
				head = newnode;
				tail = newnode;	
			}
			else
			{
				tail -> next = newnode;
				tail = newnode;
			}
			size++;
		}
		
		//to get first element
		int front()
		{
			
			if(isEmpty())
			{
				cout << "Queue is empty" << endl;
				return 0;
			}
			return head -> data;
		}
		
		//to remove first element
		int dequeue()
		{
			if(isEmpty())
			{
				cout << "Queue is empty" << endl;
				return 0;
			}
			
			int ans = head -> data;
			Node *temp = head;
			head = head -> next;
			delete temp;  //deallocating memory
			size--;
			return ans;
		}
	
};

int main()
{
	QueueUsingLL q1;
	
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

	cout << q1.front() << endl;	
	cout << q1.getSize() << endl;
	cout << q1.isEmpty() << endl;
}
