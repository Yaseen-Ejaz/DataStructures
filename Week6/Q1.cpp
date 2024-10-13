#include <iostream>             //yaseen ejaz ahmed   B20F0283CS014
using namespace std;

class node
{
	private:
	int data;
	node* next;
	node *head=NULL;
	node *ptr;
	
	public:
	void InsertNode(int value)
	{
	
		node* temp=new node();
		temp->data=value;
		
		temp->next=NULL;
		
		if(head==NULL)
		{
			head=temp;
			ptr=head;
		}
		
		else
		{
			ptr->next=temp;
			ptr=ptr->next;	
		}
	}
	
	void show()
	{
		ptr=head;
		cout<<"\n\nThe values in the linked list are :\n";
		while(ptr->next!=NULL)
		{
			cout<<ptr->data<<"\t";
			ptr=ptr->next;
		}
		
		cout<<ptr->data;
	}
	
	int count(int n)
	{
		int counter=0;
		ptr=head;
		while(ptr->next!=NULL)
		{
			if(ptr->data == n)
			counter++;
			
			ptr=ptr->next;
		}
		
		if(ptr->data == n)
		counter++;
		return counter;
	}

};

int main()
{
	int value,search,i=1;
	node n;
	cout<<"\t\t\tNumber of times a value occurs in a linked list\n\n";
	do
	{
		cout<<"Enter number "<<i<<" (-1 to exit) : ";
		cin>>value;
		
		if(value!=-1)
		n.InsertNode(value);	
		i++;
	}
	while(value!=-1);
	
	n.show();
	cout<<"\nEnter the number to find : ";
	cin>>search;
	
	cout<<"\n\nThe number of "<<search<<"'s in the linked list is "<<n.count(search);
}
