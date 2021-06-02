//array operations
//search element in array

#include<iostream>
using namespace std;

int search(int arr[], int size, int n)
{
	for(int i = 0; i < size ; i++)
	{
		if(n ==arr[i])
		{
			return i;
		}
	}
	return -1;  //if element is not found in array
}

int main()
{
	int arr[5] = { 1,3,5,2,11};
	
	int index = search(arr, 5, 16);
	cout << "Element found at index : " << index << endl;
}
