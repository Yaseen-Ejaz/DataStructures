#include <iostream>                 //yaseen ejaz ahmed   B20F0283CS014
using namespace std;

/*Given a circularly sorted array of integers, find the number of times the array is rotated. Assume
there are no duplicates in the array and the rotation is in anti-clockwise direction.*/

int main()
{
	
	int a[6] = {2,5,6,8,9,10};
	int c=0;
	int b[6] = {9, 10, 2, 5, 6, 8};
	
	
	for(int i=0;i<6;i++)
	{
		if(a[0]!=b[i])
		c++;
		
		else 
		break;
	}
	
	cout<<"The number of rotations in the array is "<<c;
	
	delete[] a;
	delete[] b;
}
