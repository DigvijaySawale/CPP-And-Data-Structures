// complex number class

#include<iostream>
using namespace std;

class ComplexNumbers{
	
	private:
		int real;
		int imaginary;
		
	public:
		
		ComplexNumbers(int real, int imaginary)
		{
			this -> real = real;
			this -> imaginary = imaginary;
		}
		void print()
		{
			cout << this -> real << "+ " << this -> imaginary<<"i"<< endl;
		}
		
		void add(ComplexNumbers const &c2)
		{
			real = real + c2.real;
			imaginary = imaginary + c2.imaginary;
		}
		
		void multiply(ComplexNumbers const &c2)
		{
			int r = (real * c2.real) - (imaginary * c2.imaginary);
			int i = (real * c2.imaginary) + (imaginary * c2.real);
			
			
			real = r;
			imaginary = i;
		}
};

int main()
{
	int real1,real2, imaginary1 , imaginary2;
	
	cin >> real1 >> imaginary1;
	cin >> real2 >> imaginary2;
	
	ComplexNumbers c1(real1, imaginary1);
	ComplexNumbers c2(real2, imaginary2);
	c1.print();
	c2.print();
	
	c1.add(c2);
	c1.print();
	c2.print();
	
	c1.multiply(c2);
	c1.print();
	c2.print();

}
