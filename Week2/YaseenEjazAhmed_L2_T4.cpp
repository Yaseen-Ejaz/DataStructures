#include <iostream>                //yaseen ejaz ahmed   B20F0283CS014
using namespace std;

struct complex
{
	double real1;
	double img1;
	
	double real2;
	double img2;
}c;

void Add()
{
	cout<<"\n\nAddition : ";
	if(c.img1+c.img2>=0)
	cout<<c.real1+c.real2<<"+"<<c.img1+c.img2<<"i";
	else
	cout<<c.real1+c.real2<<c.img1+c.img2<<"i";
}

void Sub()
{
	cout<<"\n\nSubtraction : ";
	if(c.img1+c.img2>=0)
	cout<<c.real1-c.real2<<c.img1-c.img2<<"i";
	else
	cout<<c.real1-c.real2<<"+"<<c.img1-c.img2<<"i";
}

void Mul()
{
	cout<<"\n\nMultiplication : ";
	cout<<c.real1*c.real2<<" + ("<<c.real1*c.img2<<"i) + ("<<c.img1*c.real2<<"i) + ("<<c.img1*c.img2<<"i^2)\n";
	cout<<c.real1*c.real2<<" + ("<<(c.real1*c.img2)+ (c.img1*c.real2)<<"i) + ("<<c.img1*c.img2<<"i^2)";
}

void Div()
{
	cout<<"\n\nDivision : ";
	cout<<c.real1<<"+("<<c.img1<<"i) / "<<c.real2<<"+("<<c.img2<<"i)";
}



int main()
{
	cout<<"First Equation :\nEnter Real Part : ";
	cin>>c.real1;
	
	cout<<"Enter Imaginary Part : ";
	cin>>c.img1;
	
	cout<<"\nSecond Equation :\nEnter Real Part : ";
	cin>>c.real2;
	
	cout<<"Enter Imaginary Part : ";
	cin>>c.img2;
	
	
	cout<<"\nFirst Equation : ";
	if(c.img1>=0)
	cout<<c.real1<<"+"<<c.img1<<"i";
	else
	cout<<c.real1<<c.img1<<"i";
	
	cout<<"\nSecond Equation : ";
	if(c.img2>=0)
	cout<<c.real2<<"+"<<c.img2<<"i";
	else
	cout<<c.real2<<c.img2<<"i";
	
	Add();
	Sub();
	Mul();
	Div();
}
