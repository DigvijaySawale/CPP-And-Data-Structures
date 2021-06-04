//calculate the maximum consecative '1s' in a binary array

#include<iostream>
using namespace std;

int calculate(int arr[], int n)
{
	int maxo = 0;
	int curr = 0;
	
	for(int i = 0; i< n; i++)
	{
		if(arr[i] == 0)
		{
			curr = 0;
		}
		else
		{
			curr++;
			maxo = max(maxo, curr);
		}
	}
	return maxo;
}

int main()
{
	int arr[] = {1,0,1,1,1,1,0,1,1,1,0,1,0,1,0,1,1,0} , n = 18;
	
	cout << calculate(arr, n);
}
