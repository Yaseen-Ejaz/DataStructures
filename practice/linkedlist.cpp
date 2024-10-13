#include <iostream>             //yaseen ejaz ahmed   B20F0283CS014
using namespace std;

struct A
{
	int data;
	A *next;
	
	A *head;
};

int main()
{
	
	A* n = new A();
	
	n->data=1;
	n->next=NULL;
	
	A* n1 = new A();
	
	n1->data=2;
	n->next=n1;
	
	cout<<n->data<<n->next->data;

	
	

}
