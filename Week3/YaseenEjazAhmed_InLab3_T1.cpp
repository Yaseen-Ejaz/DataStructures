#include <iostream>                 //yaseen ejaz ahmed   B20F0283CS014
using namespace std;

/*Given a sorted array of integers, find index of first or last occurrence of a given number. If the
element is not found in the array, report that as well */

Sorted(int a[],int size)
{
	int flag=0;
	int temp,n;
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
	
	cout<<"\n\nEnter number to find first and last occurence : ";
	cin>>n;
	
	
	for(int i=0;i<size;i++)
	{
		if(a[i]==n)
		{
			cout<<"\nFirst Occurence at Index "<<i;
			flag++;
			break;
		}	
	}
	
	for(int i=size-1;i>=0;i--)
	{
		if(a[i]==n)
		{
			cout<<"\nLast Occurence at Index "<<i;
			flag++;
			break;
		}	
	}
	
	if(flag==0)
	cout<<"\nElement Not Found in the Array";
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
