#include <iostream>                  //yaseen ejaz ahmed   B20F0283CS014
using namespace std;

int binarySearch(int a[],int n,int num)
{
	int start = 0,c=0;
	int end = n-1;
    while (start <= end)
    {
        int mid = (start+end)/2;

        if (a[mid] == num)
        {
        	cout<<"Number of operations : "<<c;
        	return mid;
		}
        

        else if (a[mid] < num)
        start = mid + 1;

        else if(a[mid] > num)
        end = mid - 1;
        
        c++;
    }
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
	
    int index = binarySearch(a,n,num); 
    
	if(index == -1)
    cout<<"\nElement is not in the array";
        
    else
    cout<<"\nElement is at index "<<index;
}
