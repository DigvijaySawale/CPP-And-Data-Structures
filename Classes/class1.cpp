// this is introduction for object oriented programming 
// introduction to class

#include<iostream>
using namespace std;


//creating class
class student{
	
	//by default the access modifire is private
	public:
		
		int rollno;
		int age;
};

int main()
{
	//creating objects statically
	
	student s1;
	student s2;
	
	// giving values to objects
	s1.age = 24;
	s1.rollno = 101;
	
	cout << s1.age << endl;
	cout << s1.rollno << endl;
	
	//student s3 , s4;
	
	//creating objects dynamically
	student *s5 = new student;
	
	
	//since s5 is created dynamically
	(*s5).age = 23;
	(*s5).rollno = 103;
	
	//or we can also do this both are same 
	s5 -> age = 23;
	s5 -> rollno = 103;
	
}
