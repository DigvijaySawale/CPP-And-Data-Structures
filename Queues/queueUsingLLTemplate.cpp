//creating queue using linked list but in template form

#include<iostream>
using namespace std;


template <typename T>

//creating the node
class Node
{
	public:
		T data;
		Node *next;
		
		Node(T data)
		{
			this -> data = data;
			next = NULL;
		}
};


template <typename T>
//creating class for queue
class QueueUsingLL
{
	Node <T> *head;    //exit point 
	Node <T> *tail;    //entry point 
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
			Node <T> *newnode = new Node<T> (dt);
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
		T front()
		{
			
			if(isEmpty())
			{
				cout << "Queue is empty" << endl;
				return 0;
			}
			return head -> data;
		}
		
		//to remove first element
		T dequeue()
		{
			if(isEmpty())
			{
				cout << "Queue is empty" << endl;
				return 0;
			}
			
			int ans = head -> data;
			Node <T> *temp = head;
			head = head -> next;
			delete temp;     //deallocating memory
			size--;
			return ans;
		}
	
};

int main()
{
	QueueUsingLL <char> q1;  //creating queue for characters
	
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
