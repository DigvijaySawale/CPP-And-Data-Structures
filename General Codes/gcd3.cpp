//gcd using optimised euclidean algorithm

#include<iostream>
using namespace std;

int gcd(int a, int b)
{
	if(b ==0)
	{
		return a;
	}
	else
	{
		return gcd(b, a%b);
	}
}
/*
if a> b
then b%a = a
*/

int main()
{
	cout << gcd(12,8) << endl;
}
