#include <iostream>             //yaseen ejaz ahmed   B20F0283CS014
using namespace std;

//Write a program that shows following output: Element Value Histogram

void PrintHistogram(int a[],int size)
{
	int temp;
	cout<<"\nElement\tValue\tHistogram\n";
	
	for(int i=0;i<10;i++)
	{
		cout<<i<<"\t"<<a[i]<<"\t";
		temp=a[i];
		
		for(int i=1;i<=temp;i++)
		cout<<"*";
		
		cout<<endl;
	}
}

int main()
{
	int size=10;
	int a[size];
	cout<<"Please enter 10 integers :\n";
	
	for(int i=0;i<size;i++)
	{
		cout<<"Enter Number "<<i+1<<" : ";
		cin>>a[i];
	}
	
	PrintHistogram(a,size);
	
	delete[] a;
}

