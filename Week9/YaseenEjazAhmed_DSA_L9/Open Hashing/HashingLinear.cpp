#include <iostream>              //yaseen ejaz ahmed   B20F0283CS014
using namespace std;

class node
{
	private:
		node* head=NULL;
		node* next;
		node* next1;
		node* ptr;
		node*ptr1;
		int data;
		
	public:
	
	void rukhsana()
	{
		node* temp=new node;
		temp->data=0;
		temp->next=NULL;
		temp->next1=NULL;
		
		head=temp;
		ptr=head;
		for(int i=1;i<=10;i++)
		{
			node* temp1=new node;
		    temp1->data=0;
		    temp1->next=NULL;
		    temp1->next1=NULL;
		    
		    ptr->next=temp1;
		    ptr=temp1;
		}
	}
	
	void Push(int value,int count)
	{
		ptr=head;
		
		for(int i=1;i<=count;i++)
		{
			ptr=ptr->next;
		}
		
		if(ptr->data==0)
		ptr->data=value;
		
		else
		{
			while(ptr->data!=0)
			ptr=ptr->next;
			
		    ptr->data=value;
		    
		    if(ptr->next==NULL)
		    ptr=head;
		}
	}
	
	void showAll()
	{
		cout<<endl<<endl;
		ptr=head;
		int i=0;
		while(ptr->next!=NULL)
		{
			cout<<i++<<"\t\t"<<ptr->data<<"\n";
			ptr=ptr->next;
		}
		cout<<"\t"<<ptr->data;
	}
};

int main()
{
	node h;
	h.rukhsana();
	int a,b;
	do
	{
		cout<<"Enter number : ";
		cin>>a;
		
		b=a%10;
		
		if(a!=-1)
		h.Push(a,b);
	}
	while(a!=-1);
	h.showAll();
}	

