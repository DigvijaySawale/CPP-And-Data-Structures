//print array leaders
//array leaders are elements beyond which all the elements toward right are small
//the rightmost element is always array leader

#include<iostream>
using namespace std;

void leader(int arr[], int n)
{
	int curr_led = arr[n -1];
	cout << curr_led << " ";
	
	for(int i = n-2; i >=0; i--)
	{
		if(arr[i] > curr_led)
		{
			curr_led = arr[i];
			cout << curr_led << " ";
		}
	}
}

int main()
{
	int arr[] = {7,10,4,10,6,5,2};
	int n = 7;
	leader(arr, n);
	
}

//this program prints leaders form right
//to print form left add all leader to new array
//and print the reverse of array
