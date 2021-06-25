//more on templates
//creating template for different data types for same class differnt properties

#include<iostream>
using namespace std;

template <typename T, typename V>

class Pair
{
	T x;
	V y;      //setting different data types for class properties
	
	public:
		void setX(T x)
		{
			this -> x = x;	
		}
		
		T getX()
		{
			return x;
		}
		
		void setY(V y)
		{
			this -> y = y;	
		}
		
		V getY()
		{
			return y;
		}
		
};

int main()
{
	Pair <int ,double> p1;
	p1.setX(10);
	p1.setY(20.5545);
	
	cout << p1.getX() << " " << p1.getY() << endl;
	
	//suppose we want to create more properties for our object
	Pair <Pair<int ,int >, int> p2;       //creating new types 
	p2.setY(15);
	
	Pair <int ,int > p3;
	p3.setX(5);
	p3.setY(10);
	
	p2.setX(p3);   //setting x property of p2 as p3 which contains whole p3 obj
	//here internally copy assignment operator is used for copying p3 to p2
	
	cout << p2.getX().getX() << " " << p2.getX().getY() << " " << p2.getY() << endl;
	               //p2.getX() returns pair p3 and then getX() gives x of pair p3
	               
	               
	Pair <int , Pair<double, char> > p4;    //different data types
	//also the nesting in templates can be done to any level   
	
	
}
