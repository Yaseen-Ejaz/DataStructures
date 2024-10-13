#include <iostream>             //yaseen ejaz ahmed   B20F0283CS014
using namespace std;

// Write a program that will print multi-subscripted array as shown below using function printArray().
int min(int a[][3],int rows,int col)
{
	int min=a[0][0];
	
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(a[i][j]<min)
			min=a[i][j];
		}
	}
	
	return min;
}

int max(int a[][3],int rows,int col)
{
	int max=a[0][0];
	
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(a[i][j]>max)
			max=a[i][j];
		}
	}
	
	return max;
}

int main()
{
	
	int a[3][3];
	
	cout<<"Enter 9 values for a 3x3 Matrix : ";
	for(int i=0;i<3;i++)
	{
		cout<<"\nRow "<<i+1<<" :\n";
		for(int j=0;j<3;j++)
		{
			cout<<"Column "<<j+1<<" : ";
			cin>>a[i][j];
		}
	}
	
	cout<<"\n\nMatrix form\n";
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	cout<<"\nThe minimum value in the matrix is : "<<min(a,3,3);
	cout<<"\nThe maximum value in the matrix is : "<<max(a,3,3);
}
