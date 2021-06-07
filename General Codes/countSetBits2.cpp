//program to count set bits in a no

// this is brian kerningams algorithm

// time complexity is theta( no of set bits)


#include<iostream>
using namespace std;

int count(int n)
{
	int cnt = 0;
	
	while(n > 0)
	{
		n = n & (n-1);
		cnt++ ;
		
	}
	return cnt;
}

int main()
{
	cout << count(13) << endl;
}
