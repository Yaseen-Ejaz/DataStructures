#include <iostream>             //yaseen ejaz ahmed   B20F0283CS014
using namespace std;

int* Sort(int a[],int n)
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
	
	cout<<endl<<endl;
	
	return a;
}


int main()
{
	int n=14;
	int a[n]={10, 34, 33, 22, 77, 98, 2, 56, 7, 55, 56, 67, 88, 42};
	int p,q,r;
	
	p=0; r=n; q=(p+r)/2;
	
	int left[q];
	int right[r-q+1];
	
	cout<<"Left Array : ";
	for(int i=0;i<q;i++)
	{
		left[i]=a[i];	
	}
	
	for(int i=0;i<q;i++)
	cout<<left[i]<<"\t";
	
	int j=0;
	cout<<"\n\nRight Array : ";
	for(int i=q;i<n;i++)
	{
		right[j]=a[i];
		j++;
	}
	
	for(int i=0;i<q;i++)
	cout<<right[i]<<"\t";
	
	int* pleft;
	pleft=Sort(left,q);
	
	for(int i=0;i<q;i++)
	cout<<*(left+i)<<"\t";
	
	int* pright;
	pright=Sort(right,r-q);
	
	for(int i=0;i<q;i++)
	cout<<*(pright+i)<<"\t";
	
	int A[n];
	
	for(int i=0;i<q;i++)
	{
		A[i]=*(pleft+i);
	}
	
	j=0;
	for(int i=q;i<n;i++)
	{
		A[i]=*(pright+j);
		j++;
	}
	
	cout<<"\nMerge Arrays:";
	cout<<endl;
	for(int i=0;i<n;i++)
	cout<<A[i]<<"\t";
	
	int *pA;
	pA=Sort(A,n);
	
	cout<<"\nSort Arrays:";
	cout<<endl;
	for(int i=0;i<n;i++)
	cout<<*(pA+i)<<"\t";

	
}
