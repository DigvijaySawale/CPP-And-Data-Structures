//making new copy constructor to avoid shallow copy
//by default copy constructor does shallow copy

#include<iostream>
#include<cstring>
using namespace std;

class Student
{
    int age;

    public:
        char* name;

        Student(int age, char * name)
        {
            this -> age = age;

            this -> name = new char[strlen(name) + 1];       //deep copy
            strcpy(this -> name , name);
        }
        
        //copy constructor
        //here when we make obj of student it needs cpy cnstr and it calls our cpy cnstr which needs the cnstr obj
        //it goes in infinite loop so we pass the obj by reference
        //and in order to make copy only we make it constant
        Student(Student const &s)       //i.e -> Student const &s = main.s1;
        {
        	 this -> age = s.age;
        	 
        	 
        	 //deep copy
        	 this -> name = new char[strlen(s.name) +1];
        	 strcpy(this -> name, s.name);
		}

        void display()
        {
            cout << name << " " << age << endl;
        }
};

int main()
{
    char name[] = "abcd";
    Student s1(24,name);
    s1.display();
    
    Student s2(s1);         
    
    s2.name[0] = 'x';
    
    s1.display();
    s2.display();
}


