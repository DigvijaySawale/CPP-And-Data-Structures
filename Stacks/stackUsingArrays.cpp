 //stacks 
 //implement stack using arrays
 
 //this is class to create stack 
 //refer stackMain1.cpp for driver code
 
#include<climits>       //to use INT_MIN
class StackUsingArray	
{
	int *data;     //since we don't know the size of array we create array dynamically and intialize its pointer here
			//making data array private to avoid any illegal access to array
	int nextIndex;     //to know current top position
	int capacity;      //to store total size of array (totalSize has scope only in constructor )
	
	public:
		StackUsingArray(int totalSize)
		{
			data = new int[totalSize]; //initialising the array	and making it of size given by user
			nextIndex = 0;
			capacity = totalSize;
		}
		
		//returns no of elements in stack
		int size()
		{
			return nextIndex;
		}
		
		//check if stack is empty or not
		bool isEmpty()
		{
			/*
			if(nextIndex == 0)
				return true;
			else
				return false;
			*/
				
			return nextIndex == 0;  //same as above statements
		}
		
		
		//insert element in stack
		void push(int element)
		{
			if(nextIndex == capacity)  //to check if stack is full or not
			{
				cout << "Alert!!, Stack is full" << endl;
				return;     //to avoid further execution of function	
			}
			data[nextIndex] = element;
			nextIndex++;  //gives new top of stack
		}
		
		// delete element at top of stack	
		int pop()
		{
			if(isEmpty())
			{
				cout << "Alert!!, Stack is empty" << endl;
				return INT_MIN;  //our return type is int so it is an indication of stack empty
			}
			nextIndex--;
			return data[nextIndex];
		}
		
		//to return the top element of stack
		int top()
		{
			if(isEmpty())
			{
				cout << "Alert!!, Stack is empty" << endl;
				return INT_MIN;  //our return type is int so it is an indication of stack empty
			}
			return data[nextIndex -1];
		}
		
};
