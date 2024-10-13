#include <iostream>              //yaseen ejaz ahmed   B20F0283CS014
using namespace std;

int main()
{
	int arr[10];
	
	for(int i=0;i<10;i++)
	{
		arr[i]=0;
	}
	
	int a,b,i=0;
	do
	{
		cout<<"Enter number : ";
		cin>>a;
		
		b=a%10;
		
		if(a!=-1)
		{
			while(arr[b]!=0)
			{
				b=(b+i*i)%10;
				
				if(b==10)
				b=0;
			}
			
			arr[b]=a;
		}
		i++;
	}
	while(a!=-1);
	
	for(int i=0;i<10;i++)
	{
		cout<<i<<"|";
		cout<<"\t"<<arr[i]<<endl;
	}
}	

