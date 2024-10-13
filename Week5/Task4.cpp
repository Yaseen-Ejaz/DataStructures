#include <iostream>             //yaseen ejaz ahmed   B20F0283CS014
using namespace std;

void InsertionSort(int a[],int n)
{
	int key;
	int i,j;
	
	for(i=1;i<n;i++)
	{
		key =a[i];
				
		j=i-1;
		
		while(j>=0 && a[j]>key)
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1]=key;
    }
    
    cout<<"\n\nSorted Array :\n";
    for(int i=0;i<n;i++)
    {
    	cout<<a[i]<<"\t";
	}
}
int main()
{
	int n=13;
	
	int a[n]={12, 31, 41, 37, 49, 45, 69, 2, 56,76,67, 98, 52};
	
	cout<<"Original Array :\n";
	for(int i=0;i<n;i++)
    {
    	cout<<a[i]<<"\t";
	}
	
	InsertionSort(a,n);	
	
}
