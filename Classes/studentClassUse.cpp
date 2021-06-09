//using the student class

#include<iostream>
#include<cstring>
using namespace std;

#include "studentClass.cpp"

int main()
{
	char name[] = "abcd";
	
	Student s1(20, name);
	s1.display();
	
	name[3] = 'e';        //we changed the third letter of name
	Student s2(21, name);
	s2.display();
	
	s1.display();   
}
