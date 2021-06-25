//stack using linked list

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

//creating stack class
class Stack
{
	Node *head;
	int size;          //no of elements present in stack
	
	public:
	
		Stack()
		{
			head = NULL;
			size = 0;
		}
		
		int stackSize()
		{
			return size;
		}
		
		bool isEmpty()
		{
			if(size == 0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		void push(int dt)
		{
			Node *newnode = new Node(dt);
			newnode -> next = head;
			head = newnode;
			size++;
		}
		
		int pop()
		{
			if(isEmpty())
			{
				cout << "Alert!, stack is empty" << endl;
				return 0;
			}
			else
			{
				int ans = head -> data;
				Node * temp = head;
				head = head -> next;
				delete temp ;
				size--;
				return ans;
			}
			
		}
		
		int top()
		{
			//if stack is empty
			if(isEmpty())
			{
				cout << "Alert!, stack is empty" << endl;
				return 0;
			}
			else
			{
			return head -> data;
			}
		}
};

int main()
{
	Stack s1;
	
	s1.push(10);
	s1.push(20);
	s1.push(30);
	s1.push(40);
	cout << s1.stackSize() << endl;
	cout << s1.pop() << endl;
	cout << s1.pop() << endl;
	cout << s1.pop() << endl;
	cout << s1.stackSize() << endl;
	cout << s1.isEmpty() << endl;
	cout << s1.top();
}







