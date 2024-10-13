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

    bool Empty()
    {
        if(head==NULL)
        return true;

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
            cout<<"\t"<<(ptr->data);
		}
        
        else return 0; 
    }
};

int main()
{
	node s1;
	cout<<"\t\tEnrollment Number";
	string roll;
	
	s1.Push(66); 
	s1.Push(70);
	s1.Push(67);
	s1.Push(83);
	s1.show();
	
	
	
}
