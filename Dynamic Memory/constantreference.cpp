#include<iostream>
using namespace std;

int main()
{
	//integer constant
	const int i = 10;
	int const i2  = 10;  //both are allowed
	//i++;    not allowed
	
	
	//constant reference from non constant integers
	int j = 20;
	const int &k = j;
	
	j++; 
	//k++;  //we cannot do this as k is constant type
	// here path for k is constant
	// we can make changes through j
	
	cout << k << endl;
	
	//reference from a constant integer
	
	int const j2 = 10;
	//int &k2 = j2;
	      //we cannot do this this is not allowed
	      //since j2 is constant we can only read it 
	      // as it has only read access we cannot have a path through we can change the contents available at that memory address
}
