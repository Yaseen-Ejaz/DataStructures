#include <iostream>             //yaseen ejaz ahmed   B20F0283CS014
using namespace std;

BubbleSort(int a[],int n)
{
	int temp;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	
	cout<<"\n\nSorted in Ascending : \n";
	for(int i=0;i<n;i++)
	cout<<a[i]<<"\t";
	
}

int main()
{
	int size=8;
	
	int a[size]={10,34,2,56,7,67,88,42};
	
	cout<<"Original Array :\n";
		for(int i=0;i<size;i++)
	cout<<a[i]<<"\t";
	
	BubbleSort(a,size);
}
