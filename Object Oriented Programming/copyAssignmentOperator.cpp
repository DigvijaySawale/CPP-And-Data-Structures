//copy assinment operator

#include<iostream>
using namespace std;

#include "default_class.cpp"

int main()
{
	student s1(11,101);
	student s2(12,103);
	
	student *s3 = new student(13,104);
	
	cout << "Before copying:" << endl;
	cout << "S1 : ";
	s1.display();
	
	cout << "S2 : ";
	s2.display();
	
	cout << "S3 : ";
	s3 -> display();
	
	//using copy assignment operator
	 
	s2 = s1;
	(*s3) = s1;
	
	cout << "S1 : ";
	s1.display();
	
	cout << "S2 : ";
	s2.display();
	
	cout << "S3 : ";
	s3 -> display();
	
	//since s3 is created dynamically
	//we have to delete it manually
	//so that destructor can be called
	
	delete s3;
	
	
}
