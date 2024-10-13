#include <iostream>             //yaseen ejaz ahmed   B20F0283CS014
using namespace std;

// Write a program that will print multi-subscripted array as shown below using function printArray().

void PrintArray(int *a,int rows,int col)
{
	cout<<"\n\nMatrix form\n";
	
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<*((a+i*col)+j)<<"\t";
		}
		cout<<endl;
	}
}

int main()
{
	int rows,col;
	
	cout<<"Enter the rows of the matrix : ";
	cin>>rows;
	
	cout<<"Enter the columns of the matrix : ";
	cin>>col;
	
	int a[rows][col];
	
	for(int i=0;i<rows;i++)
	{
		cout<<"\nRow "<<i+1<<" :\n";
		for(int j=0;j<col;j++)
		{
			cout<<"Column "<<j+1<<" : ";
			cin>>a[i][j];
		}
	}
	
	PrintArray(*a,rows,col);
	
	delete[] a;
}
