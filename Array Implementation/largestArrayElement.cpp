//finding largest element in array

#include<iostream>
using namespace std;

int largestEle(int arr[], int n)
{
	int max = arr[0];
	
	for(int i = 0; i < n; i ++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}


int main()
{
	int arr[7] = {8,23,92,4,2,63,32};
	int max = largestEle(arr, 7);
	cout << "Largest element in array is " << max << endl;
}
