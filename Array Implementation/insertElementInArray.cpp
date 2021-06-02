//array operations
//insert element in static array

#include<iostream>
using namespace std;

int insert(int arr[], int n, int x, int cap, int pos) 
{
	if(n == cap)
		return n;  //to check if there is free space in array
		
	int index = pos - 1;
	
	for(int i = n - 1; i >= index; i--)
	{
		arr[i + 1] = arr[i];
	}
	
	arr[index] = x;
	return n + 1;
}

int main()
{
	int arr[5] = {1,3,4,5};
	int n = 4, cap = 5;
	
    cout << "Before Insertion" << endl;
	for(int i= 0; i < n ; i ++)
	{
		cout << arr[i] << " ";
	}
	
	cout << "\n" << "After Insertion" << endl;
	int x = 2, pos = 2;
	
	n = insert(arr, 4,x,cap, pos);
	
	for(int j = 0; j < n; j++)
	{
		cout << arr[j] << " ";
	}
	
}
