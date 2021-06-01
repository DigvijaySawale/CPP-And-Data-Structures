#include<iostream>
using namespace std;

int main()
{
    int *p = new int;   //alloting memory dynamically in heap memory
	*p = 10;
	
	cout << *p << endl;     
	
	// now for ararys
	int n;
	cout << "Enter no of elements" << endl;
	cin >> n;   //taking array size at runtime
	
	int *pa = new int[n];  //making array size dynamic
	
	for(int i = 0; i < n ; i ++)
	{
		cin >> pa[i];
		
	}
	int max = -1;
	
	for (int i =0 ; i < n ; i++)
	{
		if (max <pa[i])
		{
			max = pa[i];
		}
	}
	
	cout << "Max : " << max << endl;
	
}

