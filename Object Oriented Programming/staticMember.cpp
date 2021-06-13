//static members

#include<iostream>
using namespace std;

class Student
{
	
	static int totalStudent;   // making private
	public:
		int rollnumber;
		int age;
		
		//static int totalStudent;  //total number of student present 
		
		Student()                 //constructor
		{
			totalStudent++;   //for every object constructor is called 
		}	
		
		
		static int gettotalStudent()
		{
			return totalStudent;     //getter function
		}
		
};

int Student :: totalStudent = 0;  //initialise static data members

int main()
{
	Student s1;
	 
	Student  s2, s3, s4, s5;
	
	//cout << Student :: totalStudent  << endl;       //since our data member is private it cant be used
	
	cout << Student :: gettotalStudent() << endl;
}
