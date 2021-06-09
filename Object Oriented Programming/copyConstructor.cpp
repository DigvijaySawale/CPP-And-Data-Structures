//this program demonstrates the copy constructor

#include<iostream>
using namespace std;

// including the default_class file to access the class
#include "default_class.cpp"

int main()
{
	student s1(10,101);
	cout << "S1 : ";
	s1.display();
	
	student s2(s1);      //copying the arguments of s1 in s2
	cout << "S2 : ";
	s2.display();
	
	student *s3 = new student(11,103);
	cout << "S3 : ";
	s3 -> display();
	
	student s4(*s3);
	cout << "s4 : ";
	s4.display();
	
	student *s5 = new student(*s3);
	student *s6 = new student(s1);
	cout << "s5 : " ; 
	s5 -> display();
	
	cout << "s6 : " ; 
	s6 -> display();
}
