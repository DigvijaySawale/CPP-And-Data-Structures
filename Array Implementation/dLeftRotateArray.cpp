//moving array element toward left by d elements
//assume d less than or equal to n

#include<iostream>
using namespace std;
 
void leftRotate(int arr[], int n, int d)
{
	int temp[d];
	for(int i = 0; i < d; i++)
	{
		temp[i] = arr[i];
	}
	
	for(int i = 0; i < n-1;i++)
	{
		arr[i] = arr[i+d];
	}
	
	for(int j = d - 1; j >= 0; j--)
	{
		arr[n -d + j] = temp[j];
	}
}

int main() {
	
      int arr[] = {10,20,30,11,124}, n = 5;

      cout<<"Before Rotation"<<endl;

       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }

       cout<<endl;
       
       int d = 2;

       leftRotate(arr, n,d);

       cout<<"After Rotation by 'D' elements"<<endl;

       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }
    
}
