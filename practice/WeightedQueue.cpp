#include <iostream>
using namespace std;

class node
{
	private:
    int data;
    node* next;
    node* head;
    node* ptr;
    
    public:
    void enqueue(int value)
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
            ptr=head;
            while(ptr->next!=NULL)
            {
                ptr=ptr->next;
            }
            ptr->next=temp;
        }
    }

    void dequeue()
    {
    	node* max;
    	ptr=head;
    	max=ptr;
    	ptr=ptr->next;
    	if(head!=NULL)
    	{
    		
            while(ptr->next!=NULL)
            {
                if(max->data < ptr->data)
                {
                	max = ptr;
				}
				ptr=ptr->next;
            }
            
            if(max->data <= ptr->data)
            {
                max = ptr;
			}
			
			
			if(head==max)
		    {
			    head=head->next;
			    delete max;
		    }
		
			else
			{
			    ptr=head;
                while(ptr->next!=max)
                {
				    ptr=ptr->next;
                }
                node*temp=max;
                temp=max->next;
            
                ptr->next=temp;
                max->next=NULL;
                delete max;
			}
		}
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
                cout<<"\t"<<ptr->data;
                ptr=ptr->next;
            }
            cout<<"\t"<<ptr->data;
		}
        
        else return 0; 
        
    }
};

int main()
{
	cout<<"\t\t\tWeighted Queue";
    node n;
    int value,opt;

    do
    {
        cout<<"\n\nWould you like to\n1.Enqueue\n2.Dequeue\n3.Exit\nEnter the number : ";
        cin>>opt;

        if(opt==1)
        {
            cout<<"\n\nEnter a value : ";
            cin>>value;
            n.enqueue(value);
            cout<<endl<<endl;
            n.show();
        }

        else if(opt==2)
        {
            cout<<endl<<endl;
            
            if(n.Empty())
            {
                cout<<"QUEUE IS EMPTY";  
            }

            else
            n.dequeue();
            
            n.show();
        }

    } while (opt != 3);
    
}
