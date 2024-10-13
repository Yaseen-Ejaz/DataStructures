#include <iostream>             //yaseen ejaz ahmed   B20F0283CS014
const int size=3;
using namespace std;

class node
{
	private:
		int first=0;
		int last=-1;
		int count=0;
		char a[size];
		
	public:
		
		void Enqueue(char s,int in)
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
			int ascii;
			if(!isEmpty())
			{
				ascii=int(a[0]);
				for(int i=0;i<count;i++)
			    {
				    a[i]=a[i+1];
			    }
			    count--;
			    return ascii;
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
			for(int i=0;i<=count;i++)
			{
				cout<<a[i];
			}
			cout<<"\n-------------------------------------------------------------";
		}
};

int main()
{
	node n;
	int opt,in=0;
	char s;
	cout<<"\t\t\tNAMES";
	
	do
	{
		cout<<"\n\nWould you like to:\n1. Add a character\n2. Remove a character\n3. Exit\n";
	    cin>>opt;
	    
		if(opt==1)
		{
			cout<<"\n\nEnter a character : ";
	        cin>>s;
	        n.Enqueue(s,in);
	        in++;
	        n.show();
		}
		
		else if(opt==2)
		{
			if(!n.isEmpty())
			{
				cout<<"\nThe ASCII of letter removed is "<<n.Dequeue();
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
