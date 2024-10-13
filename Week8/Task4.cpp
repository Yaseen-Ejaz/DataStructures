#include <iostream>
using namespace std;

class node
{
	private:
    int data;
    node* next;
    node* head=NULL;
    node* ptr;
    
    public:
    void Push(int value)
    {
        node *temp = new node();
        temp->data=value;
        temp->next=NULL;

        if(head==NULL)
        {
            head=temp;
        }

        else
        {
        	node*ptr=head;
            head=temp;
            head->next=ptr;
        }
    }

    int Pop()
    {
    	node*temp=head;
    	int a=temp->data;
        head=head->next;
        delete temp;
        return a;
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
                cout<<"\t"<<char(ptr->data);
                ptr=ptr->next;
            }
            cout<<"\t"<<char(ptr->data);
		}
        
        else return 0; 
    }
};

int main()
{
	cout<<"\t\t\tStack\n\n";
    node op;
    node op1;
    string s;

    cout<<"Enter a string : ";
    cin>>s;
    
    for(int i=0;i<s.length();i++)
    {
    	if(s[i]>=48 && s[i]<=57)
    	op.Push(s[i]);
    	
    	else 
		{
			op1.Push(int(s[i]));
		}
	}
	cout<<"The operands are : ";
	op.show();
	cout<<endl;
	cout<<"The operators are : ";
	op1.show();
	
	int a,b;
	char oper;
	float res;
	while(!op.Empty() || !op1.Empty())
	{
		 b=op.Pop();
		 a=op.Pop();
		 oper=char(op1.Pop());
		
		if(oper=='+')
		res=a+b;
		
		else if(oper=='-')
		res=a-b;
		
		else if(oper=='*')
		res=a*b;
		
		else if(oper=='/')
		res=a/b;
		
		op.Push(res);
	}
	cout<<endl<<res;
	op.show();
}
