// optimized solution for lcm of two numbers

#include<iostream>
using namespace std;

int gcd(int a, int b)
{
	if(b ==0)
		return a;
		
	return gcd(b, a%b);
}

int lcm(int a , int b)
{
	return (a*b)/gcd(a,b);
}

int main()
{
	cout << lcm(18, 12) << endl;
}

/*
    using formula 
    
    a*b = gcd(a,b) * lcm(a ,b )
