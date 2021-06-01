#include<iostream>
using namespace std;

int main()
{
	const int i = 10;
	//int *p = &i ;   not allowed
	
	int const *p = &i;  //p is a pointer to a constant integer
	
	int j = 10;
	int const *p2  = &j;
	
	cout << *p2 << endl;
	j++; 
	cout << *p2 << endl;
	
	int a = 20; 
	int b = 23 ; 
	 
	int * const p3 = & a; // p3 is a constant pointer to an integer
	(*p3)++;  // allowed
	//p3 = &b;   //not allowed
	
	int const * const p4 = & b;
	   // p4 is a constant pointer to a constant integer
	
	
	//(*p3)++ ;  //not allowed
	//p4 = &a;  //not allowed
}
