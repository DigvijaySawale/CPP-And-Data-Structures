//effincient soulution for printing all possible factors of a number

//this solution gives all factors but not in ascending order

#include<iostream>
using namespace std;

void factors(int n)
{
	for(int i = 1 ; i * i <=n; i++)
	{
		if(n % i == 0)
		{
			cout << i << endl;
		}
		
		if (i != (n/i))
			cout << n/i << endl;
	}
}

int main()
{
	factors(20);
}
