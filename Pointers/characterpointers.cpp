#include<iostream>

using namespace std;

int main()
{
	int a[] = {1,2,3};
	char c[] = {"abc"};
	
	cout<<a<<endl;
	cout<<c<<endl;
	
	char *cp = &c[0];
	cout<< cp<<endl;
	
	char bn = 'a';
	char *bnp = &bn;
	
	cout<<bn<<endl;
	cout<<bnp<<endl;
}


