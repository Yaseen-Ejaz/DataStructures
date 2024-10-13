#include <iostream>              //yaseen ejaz ahmed   B20F0283CS014
using namespace std;

class node
{
	private:
		char data;
		node* next;
		node* head=NULL;
		node* ptr;
		node* tail;
		
	public:
		
		void Enqueue(char s)
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
				tail=ptr;
			}
		}
		
		int Dequeue()
		{
			node*temp=head;
			int ASCII;
			ASCII=int(temp->data);
			head=head->next;
			delete temp;
			
			return ASCII;
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
				cout<<ptr->data;
				ptr=ptr->next;
			    }
			    cout<<ptr->data;
			    cout<<"\n-------------------------------------------------------------";
			}
			
			else return 0;
		}
};

int main()
{
	node n;
	int opt;
	char s;
	cout<<"\t\t\tNAMES";
	
	do
	{
		cout<<"\n\nWould you like to:\n1. Add a character\n2. Remove a character\n3. Exit\n";
	    cin>>opt;
	    
		if(opt==1)
		{
			cout<<"\n\nEnter a name : ";
	        cin>>s;
	        n.Enqueue(s);
	        n.show();
		}
		
		else if(opt==2)
		{
			if(!n.isEmpty())
			{
				cout<<"\nThe ASCII of letter removed is "<<n.Dequeue();
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
