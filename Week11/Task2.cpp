#include <iostream>            //yaseen ejaz ahmed   B20F0283CS014
#include<stdio.h>
#include<string.h> 
#include<fstream>   
using namespace std;

class info 
{
	public:
		int code;
		string name;
		int price;
		int amount;
		float date;
		float expdate;
		
	public:	
	
	info()
	{
		code=0;
		name="\0";
		price=0;
		amount=0;
		date=0;
		expdate=0;
	}
};

class node : public info
{
	public:
		node *root=NULL;
		node *left=NULL;
		node *right=NULL;
		node *ptr;
		
		void Insert(int code, string name,int price,int amount,float date,float expdate)
		{
			node *temp=new node;
			temp->code=code;
			temp->name=name;
			temp->price=price;
			temp->amount=amount;
			temp->date=date;
			temp->expdate=expdate;
			
			if(isEmpty())
			{
				root=temp;
			}
			
			else if(root->left==NULL || root->right==NULL)
			{
				if(root->left==NULL && root->code>temp->code)
				{
					root->left=temp;	
				}
				
				else if(root->right==NULL && root->code<temp->code)
				{
					root->right=temp;
				}
			}
			
			else 
			{
				if(root->code>temp->code)
				ptr=root->left;
				
				else if(root->code<temp->code)
				ptr=root->right;
				
				
				
				if(ptr->code>temp->code)
				ptr->left=temp;
				
				if(ptr->code<temp->code)
				ptr->right=temp;
			}
			
		}
		
		bool isEmpty()
		{
			if(root==NULL)
			return true;
			
			return false;
		}
		
		void Display()
		{
			show(root);
		}
		
		void show(class node* node1)
		{
			if(node1==NULL)
			return;
			
			show(node1->left);
			
			cout<<"\n\nCode : "<<node1->code;
			cout<<"\nName : "<<node1->name;
			
			show(node1->right);
		}
		
		void Searching(int code)
		{
			search(root,code);
		}
		
		void search(class node* node1,int code)
		{
			int f=0;
			if(node1->code==code)
			{
				cout<<"~~~~~~~~~~~~~~~~~";
				cout<<"\n\nCode : "<<node1->code;
				cout<<"\nName : "<<node1->name;
				cout<<"\nPrice : "<<node1->price;
				cout<<"\nAmount : "<<node1->amount;
				cout<<"\nDate : "; node1->date;
				cout<<"\nExpiry Date : "<<node1->expdate<<endl<<endl;
				f=1;
			}
			
			if(f==0)
			{
				if(node1==NULL)
				return;
				
				search(node1->left,code);
				
				search(node1->right,code);
			}
		}
		
		void Delete(int search)
		{
			deleting(root,code);
		}
		
		void deleting(class node* node1,int code)
		{
			int f=0;
			if(node1->code==code)
			{
				delete node1;
				f=1;
			}
			
			if(f==0)
			{
				if(node1==NULL)
				return;
				
				deleting(node1->left,code);
				
				deleting(node1->right,code);
			}
		}
		
		void DeletingExpired()
		{
			delete root;
		}
		
		void FileHandling()
		{
			ofstream file("Items.txt", ios::app);
			
			node* node1;
			
			if(root!=NULL)
			{
				node1=root;
				file<<"\n\n~~~~~~~~~~~~~~~~~";
			    file<<"\nCode : "<<node1->code;
			    file<<"\nName : "<<node1->name;
				file<<"\nPrice : "<<node1->price;
				file<<"\nAmount : "<<node1->amount;
				file<<"\nDate : "; node1->date;
				file<<"\nExpiry Date : "<<node1->expdate<<endl<<endl;
			}
			
			if(root->left!=NULL)
			{
				node1=root->left;
				file<<"\n\n~~~~~~~~~~~~~~~~~";
			    file<<"\n\nCode : "<<node1->code;
			    file<<"\nName : "<<node1->name;
				file<<"\nPrice : "<<node1->price;
				file<<"\nAmount : "<<node1->amount;
				file<<"\nDate : "; node1->date;
				file<<"\nExpiry Date : "<<node1->expdate<<endl<<endl;
			}
			
			if(root->right!=NULL)
			{
				node1=root->right;
				file<<"\n\n~~~~~~~~~~~~~~~~~";
			    file<<"\n\nCode : "<<node1->code;
			    file<<"\nName : "<<node1->name;
				file<<"\nPrice : "<<node1->price;
				file<<"\nAmount : "<<node1->amount;
				file<<"\nDate : "; node1->date;
				file<<"\nExpiry Date : "<<node1->expdate<<endl<<endl;
			}
			
				
			
		}
		
};

int main()
{
    cout<<"Enter five items :"   ;

	node t;
	node exp;
	
	float setexp=15.6;       //expiry date is 15 June
	    int code;
		string name;
		int price;
		int amount;
		float date;
		float expdate; 
		for(int i=1;i<=2;i++)
		{
			cout<<"\n\n~~~~~~~~~~~~ITEM "<<i<<"~~~~~~~~~~~~~";
			cout<<"\nCode : "; cin>>code;
			cout<<"Name : "; cin>>name;
			cout<<"Price : "; cin>>price;
			cout<<"Amount : "; cin>>amount;
			cout<<"Date (DD.MM) : "; cin>>date;
			cout<<"Expiry Date (DD.MM) : "; cin>>expdate;
			
			if(expdate>setexp)
			exp.Insert( code,  name, price, amount, date,expdate);
			
			else 
			t.Insert( code,  name, price, amount, date,expdate);
			
		}
		
		system("pause");
		system("cls");
		
		cout<<"\n~~~~~Non Expired Items~~~~~\n";
		
		t.Display();
		cout<<endl<<endl;
		
		cout<<"~~~~~Expired Items~~~~~";
		exp.Display();
		
		
		int opt;
		int search;
		
		do
		{
			cout<<"\n\nWould you like to:\n1. Find an item by its code";
			cout<<"\n2. List valid items in lexicographic order of their names.";
			cout<<"\n3. List expired items in lexicographic order of their names.";
			cout<<"\n4. List all items.";
			cout<<"\n5. Delete an item given by its code.\n\nChoose : "; cin>>opt;
			
			switch(opt)
			{
				case 1:
					cout<<"\nEnter code to look for an item : ";
	                cin>>search;
	
	                t.Searching(search);
	                break;
	            
	            
	            case 2:
	            	cout<<"\n~~~Showing Valid Items Lexicographical order~~~";
	            	
	            	break;
	            	
	            	
	            case 3:
	            	cout<<"\n~~~Showing Expired Items Lexicographical order~~~";
	            	
	            	break;
	            
					
	            case 4:
	            	cout<<"\n~~~Listing all items~~~\n";
	            	t.Display();
	            	break;


	            case 5:
					cout<<"\nEnter code to delete an item : ";
	                cin>>search;
	                
	                t.Delete(search);
	            	break;
			}
			
		}
		while(opt!=-1);
		
		cout<<"\n\nDeleting all Expired Items...\n"; system("pause");
		exp.DeletingExpired();	
		
		cout<<"\n\nWriting items in file...\n";system("pause");
		t.FileHandling();
}

