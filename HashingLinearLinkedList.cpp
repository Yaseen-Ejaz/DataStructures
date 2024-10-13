#include <iostream>
using namespace std;

class Hash
{
	private:
		Hash* head=NULL;
		Hash* next=NULL;
		Hash* ptr=NULL;
		Hash*ptr1=NULL;
		int data;
		
	public:
	
	void start()
	{
		Hash* temp=new Hash;
		temp->data=0;
		temp->next=NULL;
		
		head=temp;
		ptr=head;
		for(int i=1;i<=10;i++)
		{
			Hash* temp1=new Hash;
		    temp1->data=0;
		    temp1->next=NULL;
		    
		    ptr->next=temp1;
		    ptr=temp1;
		}
	}
	
	void insert(int value)
	{
		ptr=head;
		
		int b;
			
		b=value%13;
		
		for(int i=1;i<=b;i++)
		{
			ptr=ptr->next;
		}
				
		while(ptr->data!=0)
		{
			ptr=ptr->next;
			
			if(ptr->next==NULL)
		    ptr=head;
		}
		ptr->data=value;
		
	}
	
	void show()
	{
		cout<<endl<<endl;
		ptr=head;
		int i=0;
		while(ptr->next!=NULL)
		{
			cout<<i++<<"\t\t"<<ptr->data<<"\n";
			ptr=ptr->next;
		}
	}
	
	~Hash()
	{
		while(head->next!=NULL)
		{
			ptr=head;
			while(ptr->next!=NULL)
			{
				ptr=ptr->next;
			}
			Hash* del=ptr;
			delete del;
		}
		
		delete head;
			
	}
};

int main()
{
	Hash h;
	h.start();
	h.insert(18);
	h.insert(41);
	h.insert(22);
	h.insert(44);
	h.insert(59);
	h.insert(32);
	h.insert(31);
	h.insert(73);
	
	h.show();
}	

