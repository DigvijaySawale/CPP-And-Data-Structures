#include<iostream>
using namespace std;

int main()
{
	int i = 10;
	int j = i;
	
	int &m = i;  // making m as a reference variable
	
	//cout<< i << endl;
	//cout << j << endl;
	 
	
	i++;
	cout << i <<endl;
	cout << j <<endl;
	cout << m <<endl;
	
	m++;
	cout << i <<endl;
	cout << j <<endl;
	cout << m <<endl; 
	
	int k = 100;
	m = k;   //since both i and m point to the same memory location 
	          // changes are reflected in both of the
	
	cout << i <<endl;
	cout << j <<endl;
	cout << m <<endl;

	
	

}
