#include <iostream>            //yaseen ejaz ahmed   B20F0283CS014
using namespace std;

//5-1-3-6-7-4-2

class Node 
{
	public:
		int data;
		Node *root;
	    Node *left, *right;
	    
		Node* Insert(int data)
        {
	        Node* temp = new Node;
	        temp->data = data;
	        temp->left = temp->right = NULL;
	        return temp;
        }
	
};

int main()
{
	Node n;
    n.root = n.Insert(5);
	n.root->left = n.Insert(1);
	n.root->left->right = n.Insert(3);
	n.root->left->right->left = n.Insert(2);
	n.root->left->right->right = n.Insert(4);
	n.root->right = n.Insert(6);
	n.root->right->right = n.Insert(7);

/*          5
          /   \
        1       6
         \       \
          3       7
         / \
        2  4
*/
           
}

