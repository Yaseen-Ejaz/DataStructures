#include <iostream>             //yaseen ejaz ahmed   B20F0283CS014
using namespace std;

class node
{
	private:
		node* head=NULL;
		node* next;
		node* ptr;
		int data;
	
	public:
		
		void Push(int value)
		{
			node* temp=new node;
			temp->data=value;
			temp->next=NULL;
			
			if(head==NULL)
			{
				head=temp;
				ptr=head;
			}
			
			else
			{
				temp->next=head;
				head=temp;
			}
		}
		
		int Pop()
		{
			if(head->next!=NULL)
			{
				node *temp=head;
			    int a=temp->data;
			    head=head->next;
			    delete temp;
			    return a;
			}
			
			if(head->next==NULL)
			{
				int a=head->data;
				head=head->next;
				return a;
			}
			
		}
		
		bool isEmpty()
		{
			if (head==NULL)
			return true;
			
			return false;
		}
		
		int show()
		{
			ptr=head;
			
			while(ptr->next!=NULL)
			{
				cout<<ptr->data;
				ptr=ptr->next;
			}
			cout<<ptr->data;
		}
};


int main()
{
	node n;
	string s;
	bool f=false;
	cout<<"Enter the expression : ";
	getline(cin,s);
	
	for(int i=0;i<s.length();i++)
	{
		if(s[i]==' ')
		f==true;
	}
	
	if(f)
	cout<<"ERROR";
	
	else
	{
		for(int i=0;i<s.length();i++)
		{
			if(s[i]>=48 && s[i]<=57)
		    n.Push(s[i]-48);
		    
		    else
		    {
		    	int a=n.Pop();
		    	int b=n.Pop();
		    	int c;
		    	
		    	if(s[i]=='+')
		    	c=b+a;
		    	
		    	else if(s[i]=='-')
		    	c=b-a;
		    	
		    	else if(s[i]=='*')
		    	c=b*a;
		    	
		    	else if(s[i]=='/')
		    	c=b/a;
		    	
		    	n.Push(c);
		    	
			}
			cout<<endl<<endl;
			
			n.show();
			
		}
		
	}
	
}
