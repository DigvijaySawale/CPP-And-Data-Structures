//josephus problem

// so here there are n natural numbers are given arranged in form of circle and a int k is given
// we have to remove k-th number for every iteration 
//and return the last remaining number

#include<iostream>
using namespace std;

int josephus(int n, int k)       
{
	if(n == 1)
	{
		return 0;
	}
	else
		return ((josephus(n-1, k) + k) % n) ;  //considering n starting from 0
}

/*
int jos(int n, int k)
{
	return josephus(n,k) + 1;   // if n starts from 1
}
*/

int main()
{
	int res = josephus(4,2);      // change the values here
	cout << "The last remaining no is : " << res << endl;
	return 0;
}
