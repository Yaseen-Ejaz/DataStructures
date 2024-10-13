#include <iostream>             //yaseen ejaz ahmed   B20F0283CS014
using namespace std;

SelectionSort(int a[],int n)
{
	int temp,min;
	
	for(int i=0;i<n;i++)
	{
		min=i;
		
		for (int j = i+1; j < n; j++)
		{
			if (a[min]>a[j])
            min = j;  
		}
		
		temp=a[i];
        a[i]=a[min];
        a[min]=temp;				
	}
	
	cout<<"\n\nArray in Ascending order:\n";
	for(int i=0;i<n;i++)
	cout<<a[i]<<"\t";
}

int main()
{
	int size=8;
	
	int a[size]={10,34,2,56,7,67,88,42};
	
	cout<<"Original Array:\n";
	for(int i=0;i<size;i++)
	cout<<a[i]<<"\t";
	
	SelectionSort(a,size);
	
}
