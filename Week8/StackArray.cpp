#include <iostream>              //yaseen ejaz ahmed   B20F0283CS014
using namespace std;

const int size=5;
class Stack
{
	private:
		int a[size];
		int top=-1;
		
	public:
		
		void Push(int n)
		{
			if(isFull())
			{
				cout<<"Stack is Full";
			}
			
			else
			{
				a[++top]=n;
			}
		}
		
		void Pop()
		{
			if(isEmpty())
			{
				cout<<"Stack is Empty";
			}
			
			else
			{
				top--;
			}
		}
		
		
		bool isEmpty()
		{
			if(top==-1)
			return true;
			return false;
		}
		
		bool isFull()
		{
			if(top==size-1)
			return true;
			return false;
		}
		
		void show()
		{
			for(int i=0;i<=top;i++)
			{
				cout<<a[i]<<"\t";
			}
		}
};

int main()
{
	cout<<"\t\tSTACK";
	int opt,num;
	Stack s;
	do
	{
		cout<<"\n\nWould you like to\n1. Push a number\n2. Pop a number\n3. Exit\n";
		cin>>opt;
		
		if(opt==1)
		{
			cout<<"Enter a number : ";
			cin>>num;
			s.Push(num);
			s.show();
		}
		
		else if(opt==2)
		{
			s.Pop();
			s.show();
		}
		
		
	}
	while(opt!=3);
}
