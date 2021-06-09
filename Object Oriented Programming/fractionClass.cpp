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
										//this keyword is used here as the parameter name contradicts to the data 
										//data members of the class
										
										// this keyword can be skipped in case of the denominator 
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
		
		//void add(Fraction f2)        //function to add two fractions
		void add(Fraction const &f2)    //passing by reference to avoid more memory usage and reduce time
		{
			int lcm = this -> denominator * (f2.denominator);    //lcm of denominators
			int x = lcm / this -> denominator;
			//int lcm = denominator * (f2.denominator);    //lcm of denominators
			//int x = lcm / denominator;
			int y = lcm / f2.denominator;     
			
							// here in above three lines the this keyword can be skipped
							// the function assumes that the data member is referring to the object arguments
			
			int num = x * this -> numerator + (y * f2.numerator);      //finding numerator
			
			numerator = num;
			denominator = lcm;
			
			simplify();     // calling the function
			
		}
		
		void multiply(Fraction const &f2)
		{
			numerator = numerator * f2.numerator;
			denominator = denominator * f2.denominator;
			
			simplify();
		}
};


int main()
{
	Fraction f1(10,2);
	Fraction f2(15,4);
	
	f1.add(f2);
	
	f1.print();
	f2.print();
	
	
	f1.multiply(f2);
	f1.print();
	f2.print();
}
