#include <iostream>
#include <fstream>
using namespace std;

class Network
{
public:

    string  data;
    // Pointers
    Network *modem;
    Network *up;
    Network *down;
    Network *left;
    Network *right;

    Network()
    {
        modem=up=down=left=right= NULL;
        data="\0";
    }

    void Creat_Network()
    {
        string arr[4] = {"up","left","right","down"};

        for (int i = 0; i < 5; ++i)
        {
            Network *temp = new Network;

            if (modem==NULL)
            modem=temp;

            else
            {
                if (arr[i-1]=="up")
                {
                    modem->up = temp;
                    temp->data = "A";
                    for (int j = 0; j < 4; ++j)
                    {
                        Network *temp1 = new Network;
                        if (arr[j] == "up")
                        {
                            temp->up = temp1;
                            temp1->data = "\0";
                        }

                        if (arr[j] == "left")
                        {
                            temp->left = temp1;
                            temp1->data = "\0";
                        }

                        if (arr[j] == "right")
                        {
                            temp->up = temp1;
                            temp1->data = "\0";
                        }

                        if (arr[j] == "down")
                        {
                            temp->up = temp1;
                            temp1->data = "\0";
                        }
                    }
                }

                if (arr[i-1]=="down")
                {
                    modem->down = temp;
                    temp->data = "D";

                    for (int j = 0; j < 4; ++j)
                    {
                        Network *temp1 = new Network;
                        if (arr[j] == "up")
                        {
                            temp->up = temp1;
                            temp1->data = "\0";
                        }

                        if (arr[j] == "left")
                        {
                            temp->left = temp1;
                            temp1->data = "\0";
                        }

                        if (arr[j] == "right")
                        {
                            temp->up = temp1;
                            temp1->data = "\0";
                        }

                        if (arr[j] == "down")
                        {
                            temp->up = temp1;
                            temp1->data = "\0";
                        }
                    }

                }


                if (arr[i-1]=="left")
                {
                    modem->left = temp;
                    temp->data = "B";

                    for (int j = 0; j < 4; ++j)
                    {
                        Network *temp1 = new Network;
                        if (arr[j] == "up")
                        {
                            temp->up = temp1;
                            temp1->data = "\0";
                        }

                        if (arr[j] == "left")
                        {
                            temp->left = temp1;
                            temp1->data = "\0";
                        }

                        if (arr[j] == "right")
                        {
                            temp->up = temp1;
                            temp1->data = "\0";
                        }

                        if (arr[j] == "down")
                        {
                            temp->up = temp1;
                            temp1->data = "\0";
                        }
                    }
                }

                if (arr[i-1]=="right")
                {
                    modem->right = temp;
                    temp->data = "C";

                    for (int j = 0; j < 4; ++j)
                    {
                        Network *temp1 = new Network;
                        if (arr[j] == "up")
                        {
                            temp->up = temp1;
                            temp1->data = "\0";
                        }

                        if (arr[j] == "left")
                        {
                            temp->left = temp1;
                            temp1->data = "\0";
                        }

                        if (arr[j] == "right")
                        {
                            temp->up = temp1;
                            temp1->data = "\0";
                        }

                        if (arr[j] == "down")
                        {
                            temp->up = temp1;
                            temp1->data = "\0";
                        }
                    }
                }
                
            }//Else End

        }//For loop End
        
    }// End of Creat_Network



};

class node
{
	public:
		node* head=NULL;     //head
		node* next;
		string mssg;
		
	void Enqueue(string msg)
	{
		node* temp=new node;
		temp->mssg=msg;
		temp->next=NULL;
		
		
		if(head==NULL)
		{
			head=temp;
		}
		
		else
		{
			node* ptr=head;
            while(ptr->next!=NULL)
            {
                ptr=ptr->next;
            }
            ptr->next=temp;
		}
	}
	
	bool isEmpty()
	{
		if(head==NULL)
		return true;
		
		return false;
	}
	
	void show()
	{
		node *ptr=head;
		
		cout<<endl<<endl;
		while(ptr->next!=NULL)
		{
			cout<<ptr->mssg<<"\n";
			ptr=ptr->next;
		}
		
		cout<<ptr->mssg<<"\n";

	}
	
}N;

void InsertionSort(string Msg[],int Prt[],string IP[],int n)
{
	int prt,j;
	string msg;
	string ip;
	//insertion sort
	for(int i=1;i<n;i++)
	{
		msg =Msg[i];
		prt=Prt[i];
		ip=IP[i];
		
		j=i-1;
		
		while(j>=0 && Prt[j]<prt)
		{
			Msg[j+1] = Msg[j];
			Prt[j+1] = Prt[j];
			IP[j+1]  = IP[j];
			j--;
		}
		Msg[j+1]=msg;
		Prt[j+1]=prt;
		IP[j+1] =ip;

    }
    
    cout<<"\n\nSorted Based on Priority";
    for(int i=0;i<n;i++)
    {
		cout<<"\n"<<i+1<<". "<<Prt[i]<<"\t"<<Msg[i]<<"\t"<<IP[i];
		N.Enqueue(Msg[i]);
	}
	
	
}

int main()
{
	Network n;
    n.Creat_Network();
    string s[10];
    int p[10];
    string ip[10];
	int opt;
    string str;
    
    for(int i=0;i<10;i++)
    {
    	s[i]="\0";
    	p[i]=0;
	}
	
	int i=0;
	int j=-1;
	int x;
	ifstream file("Net.txt");
	
	while(!file.eof())
	{
		string a;
		char b;
		string c;
		
		getline(file,a);
		int pr;
		file>>b;
		pr=int(b)-48;
		getline(file,c);
		
		s[i]=a;
		p[i]=pr;
		ip[i]=c;
		i++;
		j++;
	}
	
	cout<<s[i];
	cout<<"\n\n-> Number of messages = "<<j;
	
	string message[j];
	int priority[j];
	string IP[j];
	
	for(int k=0;k<j;k++)
	{
		message[k]=s[k];
		priority[k]=p[k];
		IP[k]=ip[k];
		cout<<"\n"<<k+1<<". "<<priority[k]<<"\t"<<message[k]<<"\t"<<IP[k];
	}
	
	InsertionSort(message,priority,IP,j);
	N.show();

    
}
