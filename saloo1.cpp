#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;

struct Time
{
	int hour1,hour2,min1,min2;
	int Hour, Min;
};

int main()
{
	Time t;
	
	cout << "Enter the Hour of initial time: ";				// First Hour 
	cin >> t.hour1;
	if(t.hour1<0)
	{
		cout << "No negative value here!" << endl;
		cout << "Enter Hours again: ";
		cin >> t.hour1;
	}
	
	cout << "Enter the Minutes of initial time: ";			// First Minute 
	cin >> t.min1;
	if(t.min1<0)
	{
		cout << "No negative value here!" << endl;
		cout << "Enter Minutes again: ";
		cin >> t.min1;
	}
	
	while(t.hour1>=24)
	{
		if(t.hour1>=24)
		{
			t.hour1 -= 24;
		}
	}
	
	while(t.min1>=60)
	{
		if(t.min1>=60)
		{
			t.hour1++;
			t.min1 -= 60;
		}
	}
	
	cout << "Enter the Hour of Final time: ";         // Second Hour 
	cin >> t.hour2;
	if(t.hour2<0)
	{
		cout << "\nNo negative value here! \n" << endl;
		cout << "Enter Hours again: ";
		cin >> t.hour2;
	}
	
	cout << "Enter the Minutes of Final time: ";	// Second Minute 
	cin >> t.min2;
	if(t.min2<0)
	{
		cout << "\nNo negative value here! \n" << endl;
		cout << "Enter Minutes again: ";
		cin >> t.min2;
	}
	
	while(t.hour2>=24)
	{
		if(t.hour2>=24)
		{
			t.hour2 -= 24;
		}
	}
	
	while(t.min2>=60)
	{
		if(t.min2>=60)
		{
			t.hour2++;
			t.min2 -= 60;
		}
	}
	
	cout << "\n==== The Time ==== \n" << endl;
	cout << " Initial Time = " << t.hour1 << ":" << t.min1 << endl;
	cout << " Final Time   = " << t.hour2 << ":" << t.min2 << endl;
	
	// Difference Computation
	t.Hour = (t.hour2 - t.hour1);
	if(t.Hour<0)
	{
		t.Hour += 24;
	}
	t.Min = t.min2 - t.min1;
	if(t.Min<0)
	{
		t.Min += 60;
	}
	
	cout << "\n==== Difference ==== \n" << endl;
	cout << " => " << abs(t.Hour) << ":" << abs(t.Min);
	
	cout << "\n\nPress any key to continue...";
	getch();
}
