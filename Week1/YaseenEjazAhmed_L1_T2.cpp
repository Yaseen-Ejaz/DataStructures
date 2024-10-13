#include <iostream>             //yaseen ejaz ahmed   B20F0283CS014
using namespace std;

//Write a program to ask user to enter 5 floating numbers and find the maximum and minimum of all by calling min() and max() functions.

float min(float a[],int size)
{
	float min=a[0];
	
	for(int i=0;i<size;i++)
	{
		if(min>a[i])
		min=a[i];
	}
	
	return min;
}


float max(float a[],int size)
{
	float max=a[0];
	
	for(int i=0;i<size;i++)
	{
		if(max<a[i])
		max=a[i];
	}
	
	return max;
}


int main()
{
	float a[5];
	
	cout<<"Enter 5 numbers :\n";
	
	for(int i=0;i<5;i++)
	{
		cout<<"Enter Number "<<i+1<<" : ";
		cin>>a[i];
	}
	
	cout<<"\nThe minimum number is "<<min(a,5);
	cout<<"\nThe maximum number is "<<max(a,5);
	
	delete[] a;
	
}
