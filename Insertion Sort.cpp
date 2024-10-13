#include <iostream>             //yaseen ejaz ahmed   B20F0283CS014
using namespace std;

int main()
{
	int n;
	cout<<"Enter the number of the students : ";
	cin>>n;
	
	string name[n];
	int marks[n];
	
	//input
	for(int i=0;i<n;i++)
	{
		cout<<"\nEnter Student Name "<<i+1<<" : ";
		cin>>name[i];
		
		cout<<"Enter Marks "<<i+1<<" : ";
		cin>>marks[i];
	}
	
	int keyMarks,j;
	string keyName;
	
	//insertion sort
	for(int i=1;i<n;i++)
	{
		keyName =name[i];
		keyMarks=marks[i];
		
		j=i-1;
		
		while(j>=0 && marks[j]<keyMarks)
		{
			name[j+1] = name[j];
			marks[j+1] = marks[j];
			j--;
		}
		name[j+1]=keyName;
		marks[j+1]=keyMarks;
    }
	
	//printing
	int s=0;
	cout<<"\n\nStudent\t\tMarks\n";
	for(int i=0;i<n;i++)
	{
		cout<<name[i]<<"\t\t"<<marks[i]<<endl;
		s=s+marks[i];
	}
	
	float avg=s/n;
	
	cout<<"\n\nHighest marks : "<<name[0]<<"\t"<<marks[0];
	cout<<"\nLowest marks : "<<name[n-1]<<"\t"<<marks[n-1];
	cout<<"\nAverage : "<<avg;	
}
