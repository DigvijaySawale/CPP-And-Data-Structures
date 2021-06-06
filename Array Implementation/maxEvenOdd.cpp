//finding the maximum even odd element subarray length

#include<iostream>
using namespace std;

int maxEvenOdd(int arr[], int n)
{
	int result = 1;
	int curr = 1;
	
	for(int i = 1; i < n; i++)
	{
		if((arr[i] % 2 == 0 && arr[i-1] % 2 != 0) || (arr[i] % 2 != 0 && arr[i-1] % 2 == 0))
		{
			curr++;          //here we continue the previous subarray if condition is true
			                    // else we start the new count from current element
			result = max(curr, result);
		}
		else
		{
			curr = 1;
		}
	}
	return result;
}

int main()
{
	int arr[] = {5,10,20,6,3,8};
	int n = 6;
	
	int res = maxEvenOdd(arr, n);
	cout << "Maximum continious even odd elements are " << res << endl;
	
}
