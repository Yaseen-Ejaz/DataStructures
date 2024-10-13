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
	void InsertNode(int value[],int index,int size)
	{
		node* temp=new node();
		temp->data=value[index];
		
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
		index++;
		
		if(index<=size)
		InsertNode(value,index,size);	        //recursion
	}
	
	void initialize()
	{
		ptr=head->next;
		cout<<"The values in the linked list are :\n";
	}
	
	void show()
	{
		if(ptr->next!=NULL)
		{
			cout<<ptr->data<<"\t";
			ptr=ptr->next;
			show();             //recursion
		}
		else
		cout<<ptr->data<<"\t";
		
	}

};

int main()
{
	int value,num;
	node n;
	cout<<"\t\t\tRecursion in a linked list\n\n";

	cout<<"Enter number of nodes : ";
	cin>>num;
	int a[num];
	for(int i=1;i<=num;i++)
	{
		cout<<"Enter number "<<i<<" : ";
		cin>>a[i];
	}
	int start=0;
	n.InsertNode(a,start,num);
	n.initialize();
	n.show();
	delete[] a;
}
