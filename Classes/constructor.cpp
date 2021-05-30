//this program is for constructors
#include<iostream>
using namespace std;

class student{

	public:
		int rollno;

	private:
			int age;

	public:
	    student()
	    {
	              //this is default constructor
	        cout << "Default constructor called!" << endl;
	    }

	    student(int r)
	    {
	        //this is parameterised constructor
	        cout << "Parameterised constructor called!" << endl;
          rollno = r;
     }

	    student(int a, int r)
	    {
	        //this is parameterised constructor with two parameters
			cout << "Parameterised constructor 2 called! " << endl;
	        age = a;
	        rollno = r;
		}

		void display()
		{
			cout << age << " " << rollno <<endl;
		}

		/*
		int getAge()             // getter function
		{
			return age;
		}

		void setAge(int a)       //setter function
		{
			age = a;
		}
		*/

};
int main()

{
	student s1;
	s1.display();

	student s2;

	student *s3 = new student();
	(*s3).display();

	student s4(10);
	s4.display();

    student *s5 = new student(12);
	(*s5).display();
	student s6(25,135);
	s6.display();
}
