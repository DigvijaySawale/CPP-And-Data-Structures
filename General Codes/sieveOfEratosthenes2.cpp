//original implementation of sieve of eratosthenes

//printing all prime numbers upto given limit

#include<iostream>
using namespace std;

void sieve(int n)
{
	if(n <= 1)
		return;
		
	bool isPrime[n+1];
	
	fill(isPrime, isPrime + n + 1 , true);        //fill function 
	                 //google it 
	                 
	for(int i = 2; i*i <= n ; i++)
	{
		if(isPrime[i])
		{
			for(int j = 2*i ; j <= n; j = j+ i)
			{
				isPrime[j] = false;
			}
		}
	}
	
	for(int i = 2 ; i <= n; i++)
	{
		if(isPrime[i])
			cout << i << " ";
	}
	
}

int main()
{
	sieve(20);
}


















