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

    void Pop()
    {
    	node*temp=head;
        head=head->next;
        delete temp;
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
	cout<<"\t\t\tStack\n\n";
    node n;
    int value,opt;
    
    cout<<"Pushing:\n\n";
    for(int i=0;i<=9;i++)
    {
    	n.Push(i);
    	n.show();
    	cout<<endl;
	}
	
	cout<<"Popping:\n\n";
    for(int i=0;i<=9;i++)
    {
    	n.show();
    	n.Pop();
    	cout<<endl;
	}
}
