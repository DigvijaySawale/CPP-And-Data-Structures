//templates
//templates are used when we don't want to mention data type of variables while declaration

#include<iostream>
using namespace std;

template <typename T>     //syntax


class Pair
{
	T x; //we are mentioning here data type of variables as T and considering them as the regular datatype
	T y;
	
	public:
		void setX(T x)
		{
			this -> x = x;
		}
		
		T getX()
		{
			return x;
		}
		
		void setY(T y)
		{
			this -> y = y;
		}
		
		T getY()          //to set different data types we can change T here to V
		{
			return y;
		}
};

int main()
{
	Pair<int> p1;        //syntax
	p1.setX(10);
	p1.setY(20);
	
	cout << p1.getX() << " " << p1.getY() << endl;
	
	Pair<double> p2;
	p2.setX(99.02);
	p2.setY(100.56);
	
	cout << p2.getX() << " " << p2.getY() << endl;
}
