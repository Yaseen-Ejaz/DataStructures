#include <iostream>                //yaseen ejaz ahmed   B20F0283CS014
using namespace std;

struct Time
{
	int SHour;
	int FHour;
	int SMin;
	int FMin;
};

int main()
{
	Time t;
	int hour, minute;
	
	cout<<"Starting Time\n\n";
	
	do
	{
		cout<<"Enter the Hour : ";
	    cin>>t.SHour;
	}
	while(t.SHour<0 || t.SHour > 23);
	
	do
	{
        cout<<"Enter the Minutes : ";
	    cin>>t.SMin;
    }
    while(t.SMin<0 || t.SMin > 59);
	
	cout<<"\nEnding Time\n\n";
	
	do
	{
		cout<<"Enter the Hour : ";
	    cin>>t.FHour;
	}
	while(t.FHour<0 || t.FHour > 23);
	
	do
	{
		cout<<"Enter the Minutes : ";
	    cin>>t.FMin;	
	}
	while(t.FMin<0 || t.FMin > 59);

	
	minute = t.FMin - t.SMin;
	hour = t.FHour - t.SHour;
	
	if(minute<0)
	{
		minute = minute + 60;
		hour--;
	}
	
	if(hour<0)
	{
		hour = hour + 24;
	}
	
	cout<<"\nTime Difference : \n"<<hour<<" : "<<minute;
}
