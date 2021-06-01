#include<iostream>
using namespace std;

int main()
{
    int i = 65;
	char c = i;
	
	cout<<c<<endl; 
	
	/*int *p = &i;
	char *cp = p;
	           this is implicit typecasting
	           
	*/
	
	int *p = &i;
	char *cp =  (char*)p;
	cout << p <<endl;
	cout << cp <<endl;
	
	cout << *p<< endl;
	cout << *cp <<endl;
	cout << *(cp +1) << endl;  //here big endian system works 
	        // hence 65 is printed and gives null output to remaining three equations
	cout << *(cp +2) << endl;
	cout << *(cp +3) << endl;
	
}
