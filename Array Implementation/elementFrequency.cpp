//finding the frequency of elements in a sorted array

#include<iostream>
using namespace std;

void frequency(int arr[], int n)
{
    int i = 1, freq = 1;            //start form second array element
    
    while(i < n)
    {
    	while(arr[i] == arr[i-1])     //if same increment freq and index
    	{
    		freq++;
    		i++;
		}
		cout << arr[i-1] << " -> " << freq << endl;
		freq = 1;
		i++;
	}
	
	if(n == 1 || arr[n-1] != arr[n-2])       //this is for if array has single element or there is only element with only one frequency at end of array
	{
		cout << arr[n-1] << " -> " << freq << endl;
	}
}

int main()
{
    int arr[] = {10,10,10,30,30,40};
    int n = 6;
    frequency(arr, n);
}
