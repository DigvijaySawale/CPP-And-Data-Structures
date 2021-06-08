//checking if no is a power of two or not


#include<iostream>
using namespace std;

bool powerOfTwo(int n)
{
	if(n == 0)
		return false;
		
	while(n != 1)
	{
		if(n % 2 != 0)
			return false;
		
		n = n/2;
	}
	return true;
}

int main()
{
	cout << powerOfTwo(6) << endl;
}
