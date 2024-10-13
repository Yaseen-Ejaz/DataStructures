#include <iostream>
using namespace std;

template<typename T>
class node
{
	private:
    T data;
    node* next;
    node* head;
    node* ptr;
    
    public:
    void Push(T value)
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

    void show()
    {
    	
    		ptr=head;
            while(ptr->next!=NULL)
            {
                cout<<"\t"<<ptr->data;
                ptr=ptr->next;
            }
            cout<<"\t"<<ptr->data;
		
        
    }
};

int main()
{
	cout<<"\t\t\tStack\n\n";
    node <int>n;
    node <char>n1;
    int num;
    
    do
    {
    	cout<<"Enter a number : ";
    	cin>>num;
    	if(num!=-1)
    	n.Push(num);
	}
	while(num!=-1);
	
	char ch;
    do
    {
    	cout<<"Enter an operator : ";
    	cin>>ch;
    	if(ch!='x')
    	n.Push(ch);
	}
	while(ch!='x');
	n1.show();
    
	    
}
