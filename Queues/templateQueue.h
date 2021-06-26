//queue using templates
//we will create genralise queue template using arrays
//same code of "queueUsingArrays.h" but generalise to templates 


template <typename T>     //use of template

class QueueUsingArrays
{
	T *data;     //arrays
	int nextIndex;
	int firstIndex;
	int size;
	int capacity;
	
	public:
		QueueUsingArrays(int s)     // constructor
		{
			data = new T[s];
			nextIndex = 0;
			firstIndex = -1;
			size = 0;
			capacity = s;
		}
		
		//to get size
		int getSize()
		{
			return size;
		}
		
		//to check if queue is empty or not
		bool isEmpty()
		{
			return getSize() == 0;
		}
		
		//to insert element
		void enqueue(int element)
		{
			if(size == capacity)  //check if array is full or not
			{
				cout << "Alert!, Queue is full " << endl;
				return ;
			}
			
			data[nextIndex] = element;
			nextIndex = (nextIndex + 1) % capacity; //inorder to insert elements in circular manner 
			//i.e after last position of array the next index should be enterd in first position if space is available
				
			if(firstIndex == -1) //if it is the first element to insert
			{
				firstIndex = 0;
			}
			size++;				 
		}
		
		//to display first element
		T front()
		{
			if(isEmpty())
			{
				cout << "Queue is empty" << endl;
				return 0;
			}
			return data[firstIndex]; 
		}
		
		//to remove first element
		T dequeue()
		{
			if(isEmpty())   //check if queue is empty or not
			{
				cout << "Queue is empty" << endl;
				return 0;
			}
			
			int ans = data[firstIndex];
			firstIndex = (firstIndex + 1) % capacity; // to continue using queue in circular manner 
			size--;
			
			if(size == 0)  // if all elements are removed we reset our indices to default
			{
				firstIndex = -1;
				nextIndex = 0;
			}
			return ans;
		}
};

