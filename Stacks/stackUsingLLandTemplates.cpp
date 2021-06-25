// stack using linked list but by using templates

//stack using linked list

#include<iostream>
using namespace std;

//creating the node
template <typename T>    //for each class we have to write this
class Node
{
	public:
		
	T data;
	Node <T> *next;     //to create of pointer of node of type t
	 
	Node(T data)
	{
		this -> data = data;
		next = NULL;
	}
};

//creating stack class
template <typename T> 
class Stack
{
	Node <T> *head;
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
		
		void push(T dt)
		{
			Node <T> *newnode = new Node <T> (dt); //creating new node dynamically of type node of template t
			if(head == NULL)
			{
				head = newnode;
			}
			else
			{
			newnode -> next = head;
			head = newnode;
			}
			size++;
		}
		
		T pop()
		{
			if(isEmpty())
			{
				cout << "Alert!, stack is empty" << endl;
				return 0;
			}
			else
			{
			T ans = head -> data;
			Node <T> *temp = head;    //copying head;
			head = head -> next;
			delete temp;       //deallocation memory
			size--;
			return ans;
			}
		}
		
		T top()
		{
			if(isEmpty())
			{
				cout << "Alert!, stack is empty" << endl;
				return 0;
			}
			else
			{
			return head -> data;;
			}
		}
};

int main()
{
	Stack <char> s1;
	
	s1.push(70);    //since the data type is now char here values are considered as ASCII
	s1.push(72);
	s1.push(74);
	s1.push(81);
	cout << s1.stackSize() << endl;
	cout << s1.pop() << endl;
	cout << s1.pop() << endl;
	cout << s1.pop() << endl;
	cout << s1.stackSize() << endl;
	cout << s1.isEmpty() << endl;
	cout << s1.top();
}







