#include <iostream>             //yaseen ejaz ahmed   B20F0283CS014
using namespace std;


int main()
{
	int a[10];
	
	for(int i=0;i<10;i++)
	a[i]=0;
	
	int ptr=-1;
	
	string s;
	bool f=false;
	cout<<"Enter the expression : ";
	getline(cin,s);
	
	for(int i=0;i<s.length();i++)
	{
		if(s[i]==' ')
		f==true;
	}
	
	if(f)
	cout<<"ERROR";
	
	else
	{
		for(int i=0;i<s.length();i++)
		{
			if(s[i]>=48 && s[i]<=57)
		    {
		    	ptr++;
		    	a[ptr]=int(s[i])-48;
		    	
			}
		    
		    else
		    {
		    	int x=a[ptr];
		    	
		    	a[ptr]=0;
		    	
		    	int y=a[--ptr];
		    	
		    	a[ptr]=0;
		    
		    	int c;
		    	
		    	if(s[i]=='+')
		    	c=y+x;
		    	
		    	else if(s[i]=='-')
		    	c=y-x;
		    	
		    	else if(s[i]=='*')
		    	c=y*x;
		    	
		    	else if(s[i]=='/')
		    	c=y/x;
		    	a[ptr]=c;
		    	
		    	
			}
			
			cout<<endl;
			for(int i=0;i<10;i++)
		    	cout<<a[i];
		}
		
		cout<<"\n\nTHE EVALUATION OF EXPRESSION IS "<<a[0];
	}
	
}
