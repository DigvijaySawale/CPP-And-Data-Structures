//printing all divisors of n in increasing order

//naive solution

#include<iostream>
using namespace std;

void factors(int n)
{
	for(int i = 1 ; i <= n ; i++)
	{
		if(n % i == 0)
			cout << i << " ";
	}
}

int main()
{
	factors(20);
}
