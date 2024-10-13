#include <iostream>             //yaseen ejaz ahmed   B20F0283CS014
using namespace std;

class node
{
	private:
		int data;
		node* next;
		node* head=NULL;
		node* ptr;
		int s=0;
		
	public:
		
		void Enqueue(int s)
		{
			node*temp=new node();
			temp->data=s;
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
		
		int Dequeue()
		{
			node*temp=head;
			s=s+temp->data;
			head=head->next;
			delete temp;
			
			return s;
		}
		
		bool isEmpty()
		{
			if(head==NULL)
			return true;
			
			return false;
		}
		
		int show()
		{
			if(head!=NULL)
			{
				cout<<"\nThe values in the linked list are :\n\n";
			    ptr=head;
			    while(ptr->next!=NULL)
			    {
				cout<<"\t"<<ptr->data;
				ptr=ptr->next;
			    }
			    cout<<"\t"<<ptr->data;
			    cout<<"\n--------------------------------------------";
			}
			
			else return 0;
		}
};

int main()
{
	node n;
	int opt;
	int s;
	cout<<"\t\t\tNUMBERS";
	
	do
	{
		cout<<"\n\nWould you like to:\n1. Add a number\n2. Remove a number\n3. Exit\n";
	    cin>>opt;
	    
		if(opt==1)
		{
			cout<<"\n\nEnter a number : ";
	        cin>>s;
	        n.Enqueue(s);
	        n.show();
		}
		
		else if(opt==2)
		{
			if(!n.isEmpty())
			{
				cout<<"\n->The sum of Dequeues "<<n.Dequeue()<<endl;
			}
			
			else
			{
				cout<<"\n\nTHE QUEUE IS EMPTY";
			}
			n.show();
		}
	
	}
	while(opt!=3);
	
	
}
