//stack creation using templates
//i.e. the data types of the variables are not declared during creation
//here we are taking reference of "stackUsingDynamicArrays.cpp"

#include<iostream>
using namespace std;

template <typename T>

class StackUsingDynamicArray	
{
	T *data;     
	int nextIndex;    
	int capacity;     
	
	public:
		StackUsingDynamicArray()
		{
			data = new T[4]; //creating the initial array of size 4 and the size will be increased when it becomes full
			nextIndex = 0;
			capacity = 4;
		}
		
		//returns no of elements in stack
		int size()
		{
			return nextIndex;
		}
		
		//check if stack is empty or not
		bool isEmpty()
		{				
			return nextIndex == 0;  //same as above statements
		}
		
		
		//insert element in stack
		void push(int element)
		{
			if(nextIndex == capacity)  //increasing size of stack using dynamic array
			{
				T *newdata = new T[2*capacity];  //creating new dynamic array
				for(int i = 0 ; i < capacity; i++)      //copying elements to new array
				{
					newdata[i] = data[i];
				}
				capacity *= 2;
				delete [] data;   //deallocating old memory
				data = newdata;   //making old array to point new array
			}
			data[nextIndex] = element;
			nextIndex++;  //gives new top of stack
		}
		
		// delete element at top of stack	
		T pop()
		{
			if(isEmpty())
			{
				cout << "Alert!!, Stack is empty" << endl;
				return 0;
			}
			nextIndex--;
			return data[nextIndex];
		}
		
		//to return the top element of stack
		T top()
		{
			if(isEmpty())
			{
				cout << "Alert!!, Stack is empty" << endl;
				return 0;
			}
			return data[nextIndex -1];
		}
		
};



int main()
{
	StackUsingDynamicArray <char> s1;   //here we are creating stacks of characters
	s1.push(102);            //here the values refer to ASCII values
	s1.push(120);
	s1.push(105);
	s1.push(70);
	s1.push(75);
	s1.push(97);
	
	cout<<s1.top() << endl ;
	
	cout<< s1.pop() << endl;
	cout<< s1.pop() << endl;
	cout<< s1.pop() << endl;
	
	cout<<s1.size() << endl  ;
	
	cout<<s1.isEmpty() << endl;
	
}
