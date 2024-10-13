#include <iostream>             //yaseen ejaz ahmed   B20F0283CS014
using namespace std;

//You’re given with marks of 10 students in Mathematics, write a program to determine the grade of each student

void Marks(int*);

int main()
{
	int a[10] = {80, 72, 93, 87, 90, 55, 66, 74, 69, 56};
	Marks(a);
	
	delete[] a;
}

void Marks(int a[])
{
		for(int i=0;i<10;i++)
	{
		cout<<"\nStudent "<<i+1<<" : "<<a[i]<<"\t";
		if(a[i]>=90)
		cout<<'A';
		
		else if(a[i]<90 && a[i]>=81)
		cout<<"B+";
		
		else if(a[i]<82 && a[i]>=71)
		cout<<'B';
		
		else if(a[i]<72 && a[i]>=66)
		cout<<'C';
		
		else if(a[i]<66 && a[i]>=60)
		cout<<'D';
		
		else if(a[i]<60)
		cout<<'F';
		
	}
}

