//creating or using the built in stack
//standard template library
//these are templates for creating stack by just including the header file

#include<iostream>

#include<stack>           //including the header file for stacks
using namespace std;  

int main()
{
	//using int type in the template
	stack <int> s1;
	
	//built in function in header file
	s1.push(10);
	s1.push(20);
	s1.push(30);
	s1.push(40);
	
	cout << s1.top() << endl;    //top element
	cout << s1.size() << endl;   //stack size
	
	s1.pop();    //here pop just deletes element but not return it
	s1.pop();
	s1.pop();
	
	cout << s1.top() << endl;
	cout << s1.size() << endl;
	
	cout << s1.empty() << endl;     //check stack empty
	
}  
