#include <iostream>                  //yaseen ejaz ahmed   B20F0283CS014
using namespace std;


int fibo(int n)
{
	if(n<=0)
	return 0;
	
	else if(n==1)
	return 1;
	
	else 
	return fibo(n-1) + fibo(n-2);
}

int main()
{
	int n;
	
	cout<<"Enter the number to find the Fibonacci : ";
	cin>>n;
	
	cout<<"\nThe Fibonacci is "<<fibo(n);
}
