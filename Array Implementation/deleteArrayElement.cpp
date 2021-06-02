//array operations
//deleting element from array

#include<iostream>
using namespace std;

int deleteElement(int arr[], int n, int ele)
{
	int i;
	for(i = 0; i < n; i++)
	{
		if(arr[i] == ele)
			break;                      //finding the position of element
	}
	
	if(i == n)
		return n;      //if element not present in array
		
	for(int j = i; j < n; j++)
	{
		arr[j] = arr[j + 1];    //changing the elements after deletion
	}
	return n -1;
}

int main()
{
	int arr[5] = {1,2,3,4,5};
	int n = 5;
	
    cout << "Before Deletion" << endl;
	for(int i= 0; i < n ; i ++)
	{
		cout << arr[i] << " ";
	}
	
	cout << "\n" << "After Deletion" << endl;
	
	int ele = 3;
	n = deleteElement(arr, 5, ele);
	
	for(int j = 0; j < n; j++)
	{
		cout << arr[j] << " ";
	}
}
