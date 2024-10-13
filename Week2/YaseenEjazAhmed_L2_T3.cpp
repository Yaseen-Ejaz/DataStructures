#include <iostream>             //yaseen ejaz ahmed   B20F0283CS014
using namespace std;

/*Create a structure(student) is which should contain name, roll and marks as its data member.
Then, create a structure variable(s). Then take data (name, roll and marks) from user and store it
in data members of structure variables. Display the data Entered by the user. */

struct student
{
	string Name;
	string RollNo;
	float Marks;
	
};

int main()
{
	student S;
	
	cout<<"Enter Student Information\nName : ";
	cin>>S.Name;
	
	cout<<"Roll Number : ";
	cin>>S.RollNo;
	
	cout<<"Marks : ";
	cin>>S.Marks;
	
	cout<<"\n\nName : "<<S.Name<<"\nRoll Number : "<<S.RollNo<<"\nMarks : "<<S.Marks;
}
