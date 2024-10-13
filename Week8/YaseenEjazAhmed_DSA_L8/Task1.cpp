#include <iostream>              //yaseen ejaz ahmed   B20F0283CS014
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

        if(Empty())
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
    
    void Pop()
    {
    	node*temp=head;
        head=head->next;
        delete temp;
    }
    
    int peek()
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
                cout<<char(ptr->data);
                ptr=ptr->next;
            }
            cout<<char(ptr->data);
		}
		return 0;
        
    }
};

int main()
{
	cout<<"\t\t\tStack\n\n";
    node n;
    node n1;
    char ch;
	int opt;
    int a[13]={66,50,48,70,48,50,56,51,67,83,48,49,52};
    
    for(int i=0;i<13;i++)
    {
    	cout<<char(a[i]);
	}
	
	cout<<"\n\n";
	do
    {
        cout<<"\n\n------------------------------------------------\n\nWould you like to\n1.Push\n2.Pop\n3.Exit\nEnter the number : ";
        cin>>opt;

        if(opt==1)
        {
            cout<<"\n\nEnter a value : ";
            cin>>ch;
            n.Push(ch);
            cout<<endl<<endl;
            
			n.show();

        }

        else if(opt==2)
        {
            cout<<endl<<endl;
            
            if(n.Empty())
            {
            	cout<<"STACK IS EMPTY";
            }

            else
            n.Pop();
            
            n.show();

            
        }
    } while (opt!=3);
    
    string enroll;
    for(int i=0;i<13;i++)
    {
    	while(a[i]!=n.peek())
    	{
    		n1.Push(n.peek());
    		n.Pop();
		}
		
		if(a[i]==n.peek())
		enroll=enroll+char(n.peek());
		
		cout<<"\n\nFirst Stack : "<<n.show();
		cout<<endl;
        cout<<"\nSecond Stack : "<<n1.show();
				
		while(!n1.Empty())
		{
			n.Push(n1.peek());
			n1.Pop();
	    }
	}                                                                                                                                                                        cout<<endl<<endl;for(int i=0;i<13;i++){cout<<char(a[i]);}
}
