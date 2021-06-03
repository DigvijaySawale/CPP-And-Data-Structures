//moving array element toward left by one

#include<iostream>
using namespace std;
 
void leftRotate(int arr[], int n)
{
	int first = arr[0];
	for(int i =0; i < n-1;i++)
	{
		arr[i] = arr[i+1];
	}
	arr[n-1] = first;
}

int main() {
	
      int arr[] = {10,20,30,11,124}, n = 5;

      cout<<"Before Rotation"<<endl;

       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }

       cout<<endl;

     leftRotate(arr, n);

       cout<<"After Rotation"<<endl;

       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }
    
}
