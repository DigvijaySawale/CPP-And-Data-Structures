//printing all possible factors of number in ascending order
//this is efficient solution

#include<iostream>
using namespace std;

void factors(int n)
{
	for(int i = 1 ; i * i < n; i++)
	{
		if(n % i == 0)
			cout << i << endl;
	}
	
	for(;i >= 1 ; i--)       
	{
		if( n % i== 0)
			cout << n/i << endl;
	}
}

int main()
{
	factors(15);
}
