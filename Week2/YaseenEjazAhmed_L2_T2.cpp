#include <iostream>             //yaseen ejaz ahmed   B20F0283CS014
using namespace std;

/*   Write a program to convert Fahrenheit temperature to Celsius degrees by passing pointers as 
arguments to the function. The formula for the conversion is: c = ( f-32) *5 .0/9.0.   */

float ConvertToCelsius(float *fp)
{
	float c;
	float *cp=&c;
	
	c = (5.0/9.0) * (*fp-32);
	
	return *cp;
}

int main()
{
	float f;
	
	cout<<"Enter the temperature in Farenheit : ";
	cin>>f;
	
	float *fp=&f;
	
	cout<<"\nThe temperature in Celsius is "<<ConvertToCelsius(fp)<<"C";
	
	delete fp;
	fp=NULL;
	
}
