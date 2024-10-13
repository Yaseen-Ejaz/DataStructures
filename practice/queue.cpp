#include <iostream>
using namespace std;

struct node
{
    int data;
    node* next;
    node* head;
    node* ptr;

    void enqueue(int value,int flag)
    {
        node *temp = new node();
        temp->data=value;
        temp->next=NULL;

        if(flag==0)
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
        node *temp=head;
        head=temp->next;
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
                cout<<ptr->data;
                ptr=ptr->next;
            }
        cout<<ptr->data;
        
    }
};

int main()
{
	cout<<"\t\t\tQUEUE";
    node n;
    int value,flag=-1,opt;

    do
    {
        cout<<"\n\nWould you like to\n1.Enqueue\n2.Dequeue\n3.Exit\nEnter the number : ";
        cin>>opt;

        if(opt==1)
        {
            
            cout<<"\n\nEnter a value : ";
            cin>>value;
            flag++;
            n.enqueue(value,flag);
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