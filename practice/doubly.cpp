#include <iostream>             //yaseen ejaz ahmed   B20F0283CS014
using namespace std;

struct node
{
	int data;
	node* next;
	node *pre;
	node *head;
	node *ptr;
	
	InsertNode(int value,int index)
	{
		node* temp=new node();
		temp->data=value;
		temp->pre=NULL;
		temp->next=NULL;
		
		if(index==0)
		{
			head=temp;
			ptr=head;
		}
		
		else
		{
			ptr->next=temp;
			temp->pre=ptr;
			ptr=ptr->next;	
		}
	}
	
	Circular()
	{
		ptr=head;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=head;
		head->pre=ptr;
	}
	
	show()
	{
		ptr=head;
		cout<<"The values in the linked list are :\n";
		while(ptr->next!=NULL)
		{
			cout<<ptr->data<<"\t";
			ptr=ptr->next;
		}
		
		
	}
	
	int size()
	{
		int size=0;
		ptr=head;
		
		cout<<endl;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
			size++;
		}
		size++;
		return size;
	}

};

int main()
{
	int value,num;
	node n;
	cout<<"Enter number of nodes : ";
	cin>>num;
	for(int i=1;i<=num;i++)
	{
		cout<<"Enter number "<<i<<" : ";
		cin>>value;
		n.InsertNode(value,i-1);
	}
	n.Circular();
	n.show();
	cout<<"\nThe number of elements in the linked list are "<<n.size();
}
