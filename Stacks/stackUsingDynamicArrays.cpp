//stacks using dynamic arrays
//no size constraints on stack

 
 
#include<climits>       //to use INT_MIN
class StackUsingDynamicArray	
{
	int *data;     
	int nextIndex;    
	int capacity;     
	
	public:
		StackUsingDynamicArray()
		{
			data = new int[4]; //creating the initial array of size 4 and the size will be increased when it becomes full
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
				int *newdata = new int[2*capacity];  //creating new dynamic array
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
