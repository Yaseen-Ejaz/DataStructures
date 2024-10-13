#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>

using namespace std;

#include<iomanip>
using std::setw;
int main ()
{
	system("Color 70");
	int matrix[3][3];
	cout<<"\t\t\t\t\t\t\t\t\t\t\t\tD E T E R M I N A N T S"<<endl;
	cout<<"\t\tEnter Array Elements:\n"<<endl;
	
	for (int i=0 ; i<3 ; i++)
	{
		cout<<"\t\tRow"<<i+1<<"\t";
		for (int j=0 ; j<3 ; j++)
		{
			cin>>matrix[i][j];
		}
		cout<<endl;
	}
	
	system("CLS");
	cout<<"\t\t\t\t\t\t\t\t\t\t\t\tD E T E R M I N A N T S"<<endl;
	cout<<"\t\tOur matrix is:"<<endl;
	for (int i=0 ; i<3 ; i++)
	{
		cout<<"\t\t|	";
		for (int j=0 ; j<3 ; j++)
		{
			cout<<matrix[i][j]<<"	";
		}
		cout<<"|"<<endl;
	}
	
	system("pause");
	cout<<"\n\n\t\tStep 1:"<<endl;
	cout<<"\t\t"<<matrix[0][0];
	cout<<"| "<<matrix[1][1]<<" "<<matrix[1][2]<<" |";
	
	cout<<" - ";
	cout<<matrix[0][1];
	cout<<"| "<<matrix[1][0]<<" "<<matrix[1][2]<<" |";
	
	cout<<" + ";
	cout<<matrix[0][2];
	cout<<"| "<<matrix[1][0]<<" "<<matrix[1][1]<<" |"<<endl;
	
	cout<<"\t\t | "<<matrix[2][1]<<" "<<matrix[2][2]<<" |";
	cout<<"    | "<<matrix[2][0]<<" "<<matrix[2][2]<<" |";
	cout<<"    | "<<matrix[2][0]<<" "<<matrix[2][1]<<" |"<<endl;
	
	system("pause");
	cout<<"\n\n\t\tStep 2:"<<endl;
	cout<<"\t\t"<<matrix[0][0]<<"(( "<<matrix[1][1]<<" * "<<matrix[2][2]<<") - ("<<matrix[1][2]<<" * "<<matrix[2][1]<<" ))";
	cout<<" - "<<matrix[0][1]<<"(( "<<matrix[1][0]<<" * "<<matrix[2][2]<<") - ("<<matrix[1][2]<<" * "<<matrix[2][0]<<" ))";
	cout<<" + "<<matrix[0][2]<<"(( "<<matrix[1][0]<<" * "<<matrix[2][1]<<") - ("<<matrix[1][1]<<" * "<<matrix[2][0]<<" ))";
	
	cout<<endl;
	system("pause");
	cout<<"\n\n\t\tStep 3:"<<endl;
	cout<<"\t\t"<<matrix[0][0]<<"( "<<matrix[1][1]*matrix[2][2]-matrix[1][2]*matrix[2][1]<<" ) - "<<matrix[0][1]<<"( "<<matrix[1][0]*matrix[2][2]-matrix[1][2]*matrix[2][0]<<") + "<<matrix[0][2]<<"("<<matrix[1][0]*matrix[2][1]-matrix[1][1]*matrix[2][0]<<")"<<endl;
	
	system("pause");
	cout<<"\n\n\t\tStep 4:"<<endl;
	cout<<"\t\t"<<matrix[0][0]*(matrix[1][1]*matrix[2][2]-matrix[1][2]*matrix[2][1])<<" - "<<matrix[0][1]*(matrix[1][0]*matrix[2][2]-matrix[1][2]*matrix[2][0])<<" + "<<matrix[0][2]*(matrix[1][0]*matrix[2][1]-matrix[1][1]*matrix[2][0])<<endl;

	system("pause");
	cout<<"\n\n\t\tStep 5:"<<endl;
	cout<<"\t\tDeterminant = ";
	cout<<"\t\t"<<matrix[0][0]*(matrix[1][1]*matrix[2][2]-matrix[1][2]*matrix[2][1])-matrix[0][1]*(matrix[1][0]*matrix[2][2]-matrix[1][2]*matrix[2][0])+matrix[0][2]*(matrix[1][0]*matrix[2][1]-matrix[1][1]*matrix[2][0])<<endl;	
}
