#include <iostream>                 //yaseen ejaz ahmed   B20F0283CS014
using namespace std;

/*Given a circularly sorted array of integers, find the number of times the array is rotated. Assume
there are no duplicates in the array and the rotation is in anti-clockwise direction.*/

void RotateArray(int a[],int size,int rotate)
{
	int b[size];
	cout<<"\nOriginal Array : \n";
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<"\t";
	}
	
	cout<<"\nRotated Array : \n";
	for(int i=0;i<size;i++)
	{
		if(rotate>=size)        //outside range of size of array
	    {
	    	rotate=0;          //move to index 0 the beginning in that case
		}
		
	    b[rotate]=a[i];
	    rotate++; 
	}
	
	cout<<endl;
	for(int i=0;i<size;i++)
	cout<<b[i]<<"\t";
}

int main()
{
	int size,rotate;
	
	cout<<"Enter size of array : ";
	cin>>size;
	
	int a[size];
	int b[size];
	
	for(int i=0;i<size;i++)
	{
		cout<<"Enter Number "<<i+1<<" : ";
		cin>>a[i];
	}
	
	cout<<"\nEnter the number of times to be rotated to the left : ";
	cin>>rotate;
	
	RotateArray(a,size,rotate);
	
	delete[] a;
	delete[] b;
}
