//in this problem all zeros in array are moved to last of array

#include<iostream>
using namespace std;

void moveZeros(int arr[] , int n)
{
	int count = 0;
	
	for(int i =0 ; i < n ; i++)
	{
		if(arr[i] != 0)
		{
			swap(arr[i] , arr[count]);
			count++;
		}
	}
}

int main() {
	
      int arr[] = {10,0,20,0,0,30,11,0,0,0,124,0}, n = 12;

      cout<<"Before Moving Zeros"<<endl;

       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }

       cout<<endl;

       moveZeros(arr, n);

       cout<<"After Moving Zeros"<<endl;

       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }
    
}
