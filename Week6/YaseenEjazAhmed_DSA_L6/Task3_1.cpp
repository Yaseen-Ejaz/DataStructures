#include <iostream>             //yaseen ejaz ahmed   B20F0283CS014
using namespace std;


struct node
{
	int data;
	node* next;
	node *head;
	node *ptr;
	
	void InsertNode(int value,int index)
	{
		node* temp=new node();
		temp->data=value;
		
		temp->next=NULL;
		
		if(index==0)
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
		cout<<"The values in the linked list are :\n";
		while(ptr->next!=NULL)
		{
			cout<<ptr->data<<"\t";
			ptr=ptr->next;
		}
		
		cout<<ptr->data;
	}
	
	bool find(int find)
	{
		int found;
		ptr=head;
		while(ptr->next!=NULL)
		{
			if(ptr->data == find)
			return true;
			
			ptr=ptr->next;
		}
		
		if(ptr->data == find)
		return true;
			
		return false;
	}
	
	void swaping(int num1,int num2)
	{
		node* startTemp1;
		node* endTemp1;
		node* startTemp2;
		node* endTemp2;;
		
		ptr=head;
		while(ptr->next!=NULL)
		{
			if(ptr->next->data == num1)
			{
			    startTemp1 = ptr;
				endTemp1 = ptr->next->next;
		
	
		
				break;
			}
			
			ptr=ptr->next;
		}
		
		if(ptr->next->data == num1)
		{
			 startTemp1 = ptr;
			 endTemp1 = ptr->next->next;
		}
			
		
		
		ptr=head;
		while(ptr->next!=NULL)
		{
			if(ptr->next->data == num2)
			{
				 startTemp2 = ptr;
			 endTemp2 = ptr->next->next;
				break;
			}
			
			ptr=ptr->next;
		}
		
		if(ptr->next->data == num2)
	    {
			 startTemp2 = ptr;
			 endTemp2 = ptr->next->next;
		}
		
		node* temp = new node();
		temp->data=num1;
		temp->next=NULL;
		
		startTemp2->next=temp;
		temp->next=endTemp2;
		
		node* temp1 = new node();
		temp1->data=num2;
		temp1->next=NULL;
		
		startTemp1->next=temp1;
		temp1->next=endTemp1;
		
			
	}
	

};

int main()
{
	int value,no,search;
	int num1,num2;
	node n;
	cout<<"Enter number of nodes : ";
	cin>>no;
	for(int i=1;i<=no;i++)
	{
		cout<<"Enter number "<<i<<" : ";
		cin>>value;
		n.InsertNode(value,i-1);
	}
	
	n.show();
	
	cout<<"\nEnter the first number to find : ";
	cin>>num1;
	
	bool flag1=n.find(num1);
	
	if(flag1)
	cout<<"First number present in the linked list";
	else 
	cout<<"First number is NOT present in the linked list";
	
	
	cout<<"\nEnter the second number to find : ";
	cin>>num2;
	
	bool flag2=n.find(num2);
	
	if(flag2)
	cout<<"Second number present in the linked list";
	else 
	cout<<"Second number is NOT present in the linked list";
	
	
	if(flag1 && flag2)
	{
		n.swaping(num1,num2);
	}
	n.show();
	
}
