//operator overloading
//we will overload operator on fractions
//refer fractionClass.cpp

//fraction class

#include<iostream>
using namespace std;

class Fraction
{
	private:
		int numerator;
		int denominator;
		
	public:
		
		Fraction(int numerator,int denominator)       //parameterized constructor
		{
			this -> numerator = numerator;
			this -> denominator = denominator;
		}
		
		void print()
		{
			cout << this -> numerator <<"/"<< this -> denominator << endl;
		}
		
		void simplify()       //function to simplify the fraction
		{
			int gcd = 1;
			int j = min(this -> numerator, this -> denominator);
			
			for(int i = 1; i <= j; i++)
			{
				if(this->numerator % i == 0 && this->denominator % i == 0)
				{
					gcd = i;          //calculation the gcd of the numerator and denominator
				}
			}
			
			this->numerator = this->numerator / gcd;          // use of this keyword
			this->denominator = this-> denominator / gcd;
		}
		
		
		//overloading + operator
		
		Fraction  operator+(Fraction const &f2)    //passing by reference to avoid more memory usage and reduce time
		{
			int lcm = this -> denominator * (f2.denominator);    //lcm of denominators
			int x = lcm / this -> denominator;
			//int lcm = denominator * (f2.denominator);    //lcm of denominators
			//int x = lcm / denominator;
			int y = lcm / f2.denominator;     
	
			
			int num = x * this -> numerator + (y * f2.numerator);      //finding numerator
			
			Fraction fnew(num, lcm);
			fnew.simplify();
			return fnew;
			
			
			simplify();     // calling the function
			
		}
		
		//overloading * operator
		
		Fraction operator* (Fraction const &f2)
		{
			int n = numerator * f2.numerator;
			int d = denominator * f2.denominator;
			
			Fraction fnew(n,d);  //creating new obj
			fnew.simplify();
			return fnew;
		}
		
		//overloading == operator
		
		bool operator==(Fraction const &f2)
		{
			return(numerator == f2.numerator && denominator == f2.denominator);
		}
};


int main()
{
	Fraction f1(10,2);
	Fraction f2(15,4);
	
	Fraction f3 = f1 + f2;
	
	Fraction f4 = f1 * f2;
	
	f1.print();
	f2.print();
	f3.print();
	f4.print();
	
	if(f1 == f2)
	{
		cout << "Equal" << endl;
	}
	else
	{
		cout << "Not Equal" << endl;
	}
}

