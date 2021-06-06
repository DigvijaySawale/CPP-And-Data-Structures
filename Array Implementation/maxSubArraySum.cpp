// finding the maximum sum of elements of subarray of an array

#include<iostream>
#include<cmath>
using namespace std;

int subArraySum(int arr[], int n)
{
	int result = arr[0];
	int maxending = arr[0];
	
	for(int i = 1; i < n; i++)
	{
		maxending = max(maxending + arr[i], arr[i]);
		result = max(maxending , result);
	}
	
	return result;
}


int main()
{
	int arr[] = {-3,8,-2,4,-5,6};
	int n = 6;
	
	int res = subArraySum(arr,n);
	cout << "Maximum sum of subarray is " << res << endl;
	
}
