#include <iostream>             //yaseen ejaz ahmed   B20F0283CS014
using namespace std;

int main()
{
	int a[5]={5,4,3,2,1};
	int temp,j;
	
	for(int i=1;i<5;i++)
	{
		temp=a[i];
		
		j=i-1;
		
		while(j>=0 && a[j]>temp)
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1]=temp;
	}
	
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<"\t";
	}
}
