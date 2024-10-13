#include <iostream>             //yaseen ejaz ahmed   B20F0283CS014
using namespace std;

InsertionSort(int a[],int n)
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
	int n=10;
	
	int a[n]={1,8,4,6,0,3,5,2,7,9};
	
	cout<<"Original Array :\n";
	for(int i=0;i<n;i++)
    {
    	cout<<a[i]<<"\t";
	}
	
	InsertionSort(a,n);	
}
