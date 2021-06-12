//initialisation list
//when we create a constant or reference variable it is must to give them values
//but in case we are not able to do that we can use initialisation list
//initialisation list  initialises the data members at the time of memory allocation

#include<iostream>
using namespace std;

class Student
{
    public:
		int age;
		const int rollNumber;
		
		Student(int r) : rollNumber(r)          //syntax
		{	
		}	
};

int main()
{
	Student s1(101);
	
}
