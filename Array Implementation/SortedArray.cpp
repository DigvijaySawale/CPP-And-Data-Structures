// check if array is sorted
// array sorted in non-decreasing order

#include<iostream>
using namespace std;

bool isSorted(int arr[], int n)
{
	for(int i = 1; i < n ; i++)
	{
		if(arr[i] < arr[i - 1])
		{
			return false;
		}
	}
	return true;
}

/*
this checking can also be done by using two for loops 
it will traverse to each element and compare it with the next occurring elements
but the time complexity becomes too big 
*/

void output(int arr[], int n)
{
	if(isSorted(arr, n))
		cout << "Array is sorted" << endl;
	else
		cout << "Array is not sorted" << endl;
}

int main()
{
	int arr1[6] = {1,3,4,8,11,15};
	int arr2[6] = {1,3,8,4,11,15};
	int n  = 6;
	
	for(int i = 0; i < n; i++)
	{
		cout << arr1[i] << " ";
	}
	cout << " -> ";
	output(arr1, 6);
	
	for(int i = 0; i < n; i++)
	{
		cout << arr2[i] << " ";
	}
	cout << " -> ";
	output(arr2, 6);
}
