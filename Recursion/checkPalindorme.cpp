// this program checks if the string is in palindrome using recursion

#include<iostream>
using namespace std;

bool isPalindrome(string &st, int startindex, int endindex) // passing string by reference for optimaization of code
{
	if (startindex >= endindex)
	{
		return true;
	}
	
	return ((st[startindex] == st[endindex]  ) && isPalindrome(st, startindex + 1 , endindex -1));
}

int main()
{
	string s = "abcba";
	bool res = isPalindrome(s, 0, s.length()-1 );
	cout << res;
	return 0;
}
