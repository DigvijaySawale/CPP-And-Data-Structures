// this program gives  the binary representation of number using recursion

#include<iostream>
using namespace std;

void fun(int n)
{
	if(n == 0)
		return ;
		
	fun(n/2);
	cout << n % 2;
}

int main()
{
	fun(3);  //function call gives teh binary version of the number
}
