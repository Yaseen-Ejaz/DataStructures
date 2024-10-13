#include <iostream>             //yaseen ejaz ahmed   B20F0283CS014
const int size=6;
using namespace std;

class node
{
	private:
		int count=0;
		int a[size];
		int s=0;
		
	public:
		
		void Enqueue(int s,int in)
		{
			if(!isFull())
			{
				a[in]=s;
			    count++;
			}
			else cout<<"\n\nQUEUE IS FULL\n\n";
			
		}
		
		int Dequeue()
		{
			if(!isEmpty())
			{
				s=s+a[0];
				for(int i=0;i<count;i++)
			    {
				    a[i]=a[i+1];
			    }
			    count--;
			    return s;
			}
			else 
			cout<<"\n\nQUEUE IS EMPTY\n\n";
			
		}
		
		bool isEmpty()
		{
			if(a[0]==NULL)
            {
               return true; 
            }
            return false;
		}
		
		bool isFull()
		{
			if(count==size)
            {
               return true; 
            }
            return false;
		}
	
		
		int show()
		{
			cout<<endl<<endl;
			for(int i=0;i<count;i++)
			{
				cout<<a[i];
			}
		}
};

int main()
{
	node n;
	int opt,in=0;
	int s;
	cout<<"\t\t\tNUMBERS";
	
	do
	{
		cout<<"\n\nWould you like to:\n1. Add a number\n2. Remove a number\n3. Exit\n";
	    cin>>opt;
	    
		if(opt==1)
		{
			cout<<"\n\nEnter a number : ";
	        cin>>s;
	        n.Enqueue(s,in);
	        in++;
	        n.show();
		}
		
		else if(opt==2)
		{
			if(!n.isEmpty())
			{
				cout<<"\nThe sum of numbers removed is "<<n.Dequeue();
			}
			
			else
			{
				cout<<"\n\nTHE QUEUE IS EMPTY";
			}
			n.show();
		}
	
	}
	while(opt!=3);
	
	
}
