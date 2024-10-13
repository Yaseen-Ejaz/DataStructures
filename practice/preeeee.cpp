#include <iostream>
using namespace std;		// Muhammad-Suleman_B20F0012CS035

class stack
{
	public:
		
		int data;
		stack *head;
		stack *tail;
		stack *ptr;
		stack *ptr1;
		stack *link;
		
		
		int Insert(int data)
		{
			stack *temp=new stack;
			temp->link=NULL;
			temp->data=data;
			
			if(head==0)
			{
				head=temp;
				tail=head;
			}
			else
			{
				ptr=head;
				head=temp;
				head->link=ptr;
			}
			
		}
		
		void Remove()
		{
			ptr1=head;
			head=head->link;
			delete ptr1;
		}
		
		void Display()
		{	
			if(head==NULL)
			cout << "STACK IS EMPTY " <<endl;
			
			else
			{
				ptr1=head;
				while(head->link!=NULL)
				{
					cout << head->data << " ";
					head=head->link;				// To point to the next element
				}
				cout << head->data << " ";   // To show the last element 
				cout << endl;
				head=ptr1;
		   }
		}
		
		int Transfer(stack &N, stack &M)
		{
			M.Insert(N.head->data);
		}
		
		int calculation(stack &N, stack &M)
		{
			int result,y;
			
			y = N.head->data;		// The head
			ptr = N.head->link;     // Element after head
			
			if(M.head->data == 42)
			result = (N.head->data * ptr->data);
			
			
			if(M.head->data == 43)
			result = N.head->data + ptr->data;
			
			
			if(M.head->data == 45)
			result = N.head->data - ptr->data;
			
			
			if(M.head->data == 47)
			result = N.head->data / ptr->data;
			
			N.Remove();
			N.Remove();
			
			N.Insert(result);
			
		}
		
};

int main()
{
	stack N,M;
	int ascii;
	char arr[7]={'3','+','4','-','5','/','2'};
	
	for(int i=0;i<7;i++)		// Inserting the values
	{
		if(arr[i]=='+' || arr[i]=='/' || arr[i]=='-' || arr[i]=='*')
		{
			cout << "\n Opration found = " << arr[i] << endl;
			ascii = int(arr[i]);
			M.Insert(ascii);
			
		}
		else
		{
			cout << "\n Value found = " << arr[i] << endl;
			ascii = int(arr[i]);
			ascii = ascii-48;
			N.Insert(ascii);
		}
	}
	
	
	for(int i=0;i<7;i++)
	{
		N.calculation(N,M);
	}
}
