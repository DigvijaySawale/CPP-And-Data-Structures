// palindrome program

#include<iostream>
using namespace std;

bool palindrome(int n)
{
	int rev = 0;
	int temp = n;  //taking a temperory variable
	
	while (temp != 0)
	{
		int last = temp % 10;  //to get last digit of n
		
		rev = rev * 10 + last;  // building reverse variable
		
		temp = temp /10;   //shortning length of temp
	}
	
	return (rev == n);
}

int main()
{
	int n ; 
	cout << "enter n :";
	cin >> n;
	
	int ot = palindrome(n);
	cout << ot << endl;
}
