#include <iostream>              //yaseen ejaz ahmed   B20F0283CS014
using namespace std;

class node
{
	public:
		
    char data;
    node* next;
    node* head;
    node* ptr;
    
    
    void enqueue(char ch)
    {
        node *temp = new node();
        temp->data=ch;
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
        node *temp=head;
        char ch=temp->data;
        head=temp->next;
        delete temp;
        cout<<ch;
    }
    
}q;


class tree
{
	public:
		tree* head=NULL;
		tree* l=NULL;
		tree* r=NULL;
		tree* m=NULL;
		char data;
	
	void Graph()
	{
		tree *temp=new tree;
		temp->data='S';
		head=temp;
		
		tree* temp1=new tree;
		temp1->data='A';
		
		tree* temp2=new tree;
		temp2->data='B';
		
		tree* temp3=new tree;
		temp3->data='C';
		
		tree* temp4=new tree;
		temp4->data='D';
		
		head->l=temp1;
		head->m=temp2;
		head->r=temp3;
		
		temp1->r=head;
		temp2->r=head;
		temp3->l=head;
		
		temp1->l=temp4;
		temp2->l=temp4;
		temp3->r=temp4;
		
		temp4->l=temp1;
		temp4->m=temp2;
		temp4->r=temp2;	
	}
	
	show()     //showing the values
	{
		cout<<head->data;
		cout<<head->l->data;
		cout<<head->m->data;
		cout<<head->r->data;
		cout<<head->l->l->data;
	}
	
	void BFS()
	{
		tree* ptr=head;
		q.enqueue(head->data);
		head->data='X';
	}
	
};

int main()
{
	tree t;
	t.Graph();
	t.show();
	
	cout<<endl<<endl;
	t.BFS();
}
