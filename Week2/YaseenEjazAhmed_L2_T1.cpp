#include <iostream>             //yaseen ejaz ahmed   B20F0283CS014
using namespace std;

//Write a program to swap two values by passing pointers as argument to the function. 

SwapValues(int *p,int *q)
{
	int *temp;
	
	temp=p;
	p=q;
	q=temp;
	
	cout<<"\n\nAfter Swapping :\na = "<<*p<<"\t"<<"\nb = "<<*q;
	delete p;
	delete q;
	p=q=NULL;
}

int main()
{
	int a,b;
	
	cout<<"Enter the first value : ";
	cin>>a;
	
	cout<<"Enter the second value : ";
	cin>>b;
	
	int *aptr=&a;
	int *bptr=&b;
	
	cout<<"\nBefore Swapping :\na = "<<*aptr<<"\t"<<"\nb = "<<*bptr;
	
	SwapValues(aptr,bptr);
	
	delete aptr;
	delete bptr;
	aptr=bptr=NULL;
}
