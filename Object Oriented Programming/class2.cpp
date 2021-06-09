//getters and setters function
// these are used to access and modify the private members of class outside the class
#include<iostream>
using namespace std;


//creating class
class student{
	
	public:
		
		int rollno;
		
	private: 
	
		int age;
		
	public:
		void display()
		{
			cout << age << " " << rollno <<endl;
		}
		
		int getAge()             // getter function 
		{
			return age;
		}
		
		void setAge(int a)       //setter function
		{
			age = a;
		}
};

int main()
{
	
	student s1;
	student *s2 = new student();		
	
	s1.setAge(24);
	s1.rollno = 101;
	
	s1.display();
	
	cout << "S1 age " << s1.getAge() << endl;
	cout << s1.rollno << endl;
	
	
	//(*s2).age = 23;
	//(*s2).rollno = 103;
	
	s2 -> setAge(23);
	s2 -> rollno = 103;
	
	s2 -> display();
	
	cout << "s2 age " << s2 -> getAge() << endl;
	cout << s2 -> rollno << endl;
	
	
}
