#include <iostream>                  //yaseen ejaz ahmed   B20F0283CS014
using namespace std;

int LinearSearch(int a[],int n,int num)
{
	int c;
	for(int i=0;i<n;i++)
	{
		if(a[i]==num)
		{
			cout<<"Number of operations : "<<c;
			return i;
		}
		c++;
	}
	return -1;
	
	
}

int main()
{
	int n,num;
	
	cout<<"Enter the size of the array : ";
	cin>>n;
	
	int a[n];
	
	for(int i=0;i<n;i++)
	{
		cout<<"Enter value "<<i+1<<" : ";
		cin>>a[i];
	} 
	
	cout<<"\nEnter the number to find : ";
	cin>>num;
	
	int index = LinearSearch(a,n,num); 
    
	if(index == -1)
    cout<<"\nElement is not in the array";
        
    else
    cout<<"\nElement is at index "<<index;
	
	
}
