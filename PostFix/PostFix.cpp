#include <iostream>
#include <fstream>
using namespace std;

class node
{
	private:
		char data;
		node* head=NULL;
		node* ptr;
		node* next;
		
	public:
		
		int Prec(char ch)
		{
			if(ch=='^')
			return 3;
			
			else if(ch=='/' || ch=='*')
			return 2;
			
			else if(ch=='+' || ch=='-')
			return 1;
			
			else return -1;
		}
		
		void Push(char op)
		{
			if(op!=')')
			{
				node*temp=new node();
			    temp->data=op;
			    temp->next=NULL;
			        
				if(!Empty() && Prec(top())>=Prec(op) && op!='(')
			    {
			    	while(Prec(top())>=Prec(op))
			    	{
					    Pop(0);
					    
					    if(head->next!=NULL)
					    head=head->next;
					    else break;
					}
					
					
					if(head!=NULL)
					temp->next=head;
					
				
					head=temp;
			    }
			    
			    else
			    {
			        if(head==NULL)
			        {
				        head=temp;
			        }
			
			        else
			        {
				        ptr=head;
				        head=temp;
				        head->next=ptr;
			        }
				}
			}
			
			else if(op==')')
			{
				Pop(1);
			}
			
		}
		
		void Pop(int f)
		{
			if(head!=NULL && f==1)
			{
				ptr=head;
			    node*temp=head;
				string pop;
				while(ptr->data!='(')
				{
					temp=ptr;
					pop=pop+ptr->data;
					ptr=ptr->next;
					delete temp;
				}
			
				head=ptr->next;
				cout<<pop;
			}
			
			else if(f==0)
			{
				cout<<top();
			}
		}
		
		char top()
		{
			return head->data;
		}
		
		bool Empty()
        {
            if(head==NULL)
            return true;

            else
            return false;
        }
    
	    
        int show()
        {
    	    if(head!=NULL)
    	    {
    		    ptr=head;
                while(ptr->next!=NULL)
                {
                    cout<<ptr->data;
                    ptr=ptr->next;
                }
                cout<<ptr->data;
            }
        }

    
};

int main()
{
	node n;
	string s;
	int opt;
	bool check=false;
	
	
	cout<<"\t\t\tINFIX to POSTFIX\n\n";
	cout<<"Would you like to\n\n1. Type an expression\n2. Read from a file\n";
	cin>>opt;
	
	if(opt==1)
	{
		cin.ignore();
		cout<<"\nEnter an Infix Expression to convert to Postfix :\n\n";
		getline(cin,s);
	}
	
	else if(opt==2)
	{
		ifstream file("File.txt");
		getline(file,s);
		cout<<"\n\nThe expression in the file is\t"<<s;
		file.close();
	}
	
	
	for(int i=0;i<s.length();i++)
	{
		if(s[i]==' ')
		check=true;
	}
	
	if(check==true)
	cout<<"There are spaces in the expression";
	
	else
	{
		cout<<"\n\nThe postfix expression is\t";
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='+' || s[i]=='-'|| s[i]=='*' || s[i]=='/'|| s[i]=='('|| s[i]==')' || s[i]=='^' )
			n.Push(s[i]);
			
			else if( (s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z' ) )
			cout<<s[i];
		}
	}
	n.show();
}
