#include <iostream>
using namespace std;

//Write a program to find out a number among all other numbers entered by user using linear search technique.

int fact(int);

int main()
{
	int n;
	cout<<"Enter the number to find the factorial : ";
	cin>>n;
	cout<<"The factorial of "<<n<<" is "<<fact(n);
}

int fact(int n)
{
	if(n==0)
	return 1;
	else 
	return n*fact(n-1);
}
