#include <iostream>	
using namespace std;		// Muhammad Suleman-B20F0012CS035

class Hashing
{
	public:
		
	int data;
	
	Hashing *head=NULL;
	Hashing *tail=NULL;
	Hashing *link=NULL;
	Hashing *link1=NULL;
	Hashing *ptr=NULL;	// to make head back
	Hashing *ptr1=NULL; // to open the gate with link1
	
	void Creat_Nodes()
	{
		Hashing *temp=new Hashing;
		temp->data=0;
		temp->link=NULL;
		temp->link1=NULL;
		
		head=temp;
		tail=head;
		
		for(int i=1;i<=10;i++)
		{
			Hashing *temp1=new Hashing;
			temp1->data=0;
			temp1->link=NULL;
			temp1->link1=NULL;
			
			tail->link=temp1;
			tail=temp1;
		}
	}
	
	int Insert(int x, int pos)
	{
		ptr1=head;  // if the mode is 0
		
		for(int i=0;i<pos;i++)
		ptr1=ptr1->link;
		
		if(ptr1->data==0)
		ptr1->data=x;
		
		else
		{
			Hashing *temp= new Hashing;
			temp->data=x;
			temp->link=NULL;			// New node
			temp->link1=NULL;
			
			ptr1->link1=temp;
			
		}
			
		
	}
	
	void Display()
	{
		cout << "\n=======================\n ";
		cout << "\n The Elements are! \n";
		
		ptr=head;
		while(ptr->link!=NULL)
		{
			cout << "\n\t " << ptr->data;
			ptr1=ptr;
			
			if(ptr1->link1!=NULL)
			{
				ptr1=ptr1->link1;
				while(ptr1->link1!=NULL)
				{
					cout << "\t " << ptr1->data;
					ptr1=ptr1->link1;
				}
				cout << "\t " << ptr1->data;
			}
			cout << "\t " << ptr->data;
		ptr=ptr->link;
		cout << endl;
		}
		
		
		cout << "\n=======================\n " << endl;
	}
	

};

int main()
{
	Hashing H;
	int pos,count=1,x=0,size;
	
	//cout << "Enter the Size = ";
	//cin >> size;
	H.Creat_Nodes();  //Creatinf nodes
	
	while(x!=-1)
	{
		cout << "Enter the " << count << " Element = ";
		cin >> x;
		
		cout << H.head->data;
		pos = x%10;
		
		if(count>10)
		{
			cout << "\n Not Enough Memory! \n" << endl;
			break;
		}
		
		if(x!=-1)
		H.Insert(x,pos);
		
		count++;
	}
	
	H.Display();

}
