#include <iostream>
#include <cmath>
using namespace std;

struct Complex
{
	double real1,real2,img1,img2;
};

void Addition(Complex &c)
{
	cout << "\n The addition of two complex numbers: " << endl;
	cout << " (" << c.real1 << "+" << c.img1 << "i) + (" << c.real2  << "+" << c.img2 << ") = ";
	
	cout << (c.real1 + c.real2) << " + " << (c.img1 + c.img2) << "i" << endl; 
	
}

void Subtraction(Complex &c)
{
	cout << "\n The subtraction of two complex numbers: " << endl;
	cout << " (" << c.real1 << "+" << c.img1 << "i) - (" << c.real2  << "+" << c.img2 << ") = ";
	
	if(c.img1*c.img2 < 0)
	{
		cout << (c.real1 - c.real2) << " + (" << (c.img1-c.img2) << ")i" << endl;
	}
	else
	{
		cout << (c.real1 - c.real2) << " + " << (c.img1-c.img2) << "i" << endl;
	}
}

void Multiplication(Complex &c)
{
	cout << "\n The multiplication of two complex numbers: " << endl;
	cout << " (" << c.real1 << "+" << c.img1 << "i) * (" << c.real2  << "+" << c.img2 << ") = ";
	
	cout << (c.real1 * c.real2) - (c.img1 * c.img2) << " + " << (c.img2*c.real1) + (c.img1 * c.real2)<<  "i" << endl;
}

void Division(Complex &c)
{
	cout << "\n The division of two complex numbers: " << endl;
	cout << " (" << c.real1 << "+" << c.img1 << "i) / (" << c.real2  << "+" << c.img2 << ") = ";
	
	cout << "(" << (c.real1 * c.real2) + (c.img1 * c.img2)  << " / " << pow(c.real2,2) + pow(c.img2,2) << ") + (" << 
	(c.img1 * c.real2) - (c.img2 * c.real1) << " / " << pow(c.real2,2) + pow(c.img2,2) << ")i" << endl;
	 
}

int main()
{
	Complex c;
	
	cout << "Enter the Real and imagenary values of first complex number: ";
	cin >> c.real1 >> c.img1;
	cout << "Enter the Real and imagenary values of second complex number: ";
	cin >> c.real2 >> c.img2;

	Addition(c);
	Subtraction(c);
	Multiplication(c);
	Division(c);
	 
}
