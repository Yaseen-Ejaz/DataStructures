#include <iostream>             //yaseen ejaz ahmed   B20F0283CS014
using namespace std;

int main()
{
	int n;
	cout<<"Enter the number of the students : ";
	cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++)
	{	
		cout<<"Enter Marks "<<i+1<<" : ";
		cin>>a[i];
	}
	
	int key,j;

	for(int i=1;i<n;i++)
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
	
	
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
		
}
