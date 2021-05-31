#include<iostream>
using namespace std;

void print(int *p)
{
	cout<< *p <<endl;
}

void incrementpointer(int *p)
{
	p = p +1;
}

void increment(int *p)
{
	(*p)++;
}

int main()
{
     int i = 10;
     int *p = &i;
     
     //cout << i<< endl;
     //cout << p <<endl;
     
     print(p);
     
     cout<<p<<endl;
     incrementpointer(p);  //here in the function a copy of pointer is made 
                           //so no change is made in pointer p in main function
     cout<<p<<endl;
     
     cout<< *p <<endl;
     increment(p);     //here since we are using dereferencing operator to the pointer,
	                    // the operation is to the value pointed by that pointer and value is changed
     cout<< *p <<endl;

}
