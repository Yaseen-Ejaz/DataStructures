#include <iostream>                 //yaseen ejaz ahmed   B20F0283CS014
using namespace std;

/*Given a sorted array of integers, find floor and ceil of a given number in it. The floor and ceil map
the given number to the largest previous or the smallest following integer, respectively. */

Sorted(int a[],int size)
{
	int temp,n,floor=0,ceiling=0;
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]= temp;
			}
		}
	}
	
	cout<<"\nSorted : \n";
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<"\t";
	}
	
	cout<<"\nEnter a value to find the floor and ceiling : ";
	cin>>n;
	
	for(int i=size-1;i>=0;i--)
	{
		if(n>a[i])
		{
			cout<<"\nFloor : "<<a[i];
			floor++;
			break;
		}
	}
	
	if(floor==0)
	cout<<"\nFLOOR DOES NOT EXIST";
	
	for(int i=0;i<size;i++)
	{
		if(n<a[i])
		{
			cout<<"\nCeiling : "<<a[i];
			ceiling++;
			break;
		}	
	}
	
	if(ceiling==0)
	cout<<"\nFLOOR DOES NOT EXIST";
	
		
}

int main()
{
	int size;
	cout<<"Enter size of the array : ";
	cin>>size;
	
	int a[size];
	
	for(int i=0;i<size;i++)
	{
		cout<<"Enter Element "<<i+1<<" : ";
		cin>>a[i];
	}
	
	Sorted(a,size);
}
