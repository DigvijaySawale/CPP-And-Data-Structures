//finding the second largest element in array

#include<iostream>
using namespace std;


int secondLargest(int arr[], int n)
{
	int largest = 0 , second = -1;          //-1 in case if there is no second largest element present
	
	for(int i = 1; i < n; i++)             //start comparing from second element
	{
		if(arr[i] > arr[largest])          //finding the largest element in loop
		{
			second = largest;             //changing largest
			largest = i;                  // making previous largest as second largest
		}
		
		else          //if above is false
		{
			if(arr[i] != arr[largest])      //check if same large numbers are present
			{
				if(second == -1 || arr[i] > arr[second])   // so making the current ith second largest
				{
					second = i;
				}
			}
		}
	}
	return second;
}


int main()
{
	int arr[10] = {21,66,112,5,98,14,3,7,98,2};
	int n = 10;
	
	int ele;
	
	for(int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	
	ele = secondLargest(arr, 10);
	
	
	
	cout << "\nSecond largest element is " << arr[ele] << endl;
}
