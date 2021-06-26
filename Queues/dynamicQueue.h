//queue using dynamic arrays
// the change will just occur at the enqueue function to remove the size constraint




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
		
		//to insert element without thinking about the size of queue
		void enqueue(int element)
		{
			if(size == capacity)  //check if array is full if yes create new dynamic array and copy elements
			{
				T *newdata = new T [2 * capacity]; //creating new array of double capacity
				int j = 0;    //index for new data array
				
				//here no matter what the position of indixes are the newdata elements are always placed starting from 0 index
				for(int i = firstIndex; i < capacity; i++) 
				{
					newdata[j] = data[i];
					j++;
				}
				
				for(int i = 0; i < firstIndex; i++)
				{
					newdata[j] = data[i];
					j++;
				}
				
				delete [] data;     //deallocating old memory
				data = newdata;
				
				firstIndex = 0;      //resetting indices
				nextIndex = capacity;
				capacity *= 2;
				
				//cout << "Alert!, Queue is full " << endl;
				//return ;
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

