#include <iostream>
using namespace std;

class Hash
{
	private:
		int a[10];
		
	public:
		
		Hash()
		{
			for(int i=0;i<10;i++)
			{
				a[i]=0;
			}
		}
		
		void insert(int value)
		{
			int b;
			
			b=value%13;
			
			while(a[b]!=0)
			{
				a[++b];
				
				if(b==10)
				b=0;
			}
			
			a[b]=value;
		}
		
		void show()
		{
			for(int i=0;i<10;i++)
			{
				cout<<i<<"\t"<<a[i]<<endl;
			}
		}
		
		~Hash()
		{
			delete[] a;
		}
};


int main()
{
	Hash h;
	
	h.insert(18);
	h.insert(41);
	h.insert(22);
	h.insert(44);
	h.insert(59);
	h.insert(32);
	h.insert(31);
	h.insert(73);
	
	h.show();
}	

