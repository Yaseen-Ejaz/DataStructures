#include <iostream>             //yaseen ejaz ahmed   B20F0283CS014
using namespace std;

struct tree
{
		public:
		int data;
		tree* root=NULL;
		tree *left=NULL;
		tree* right=NULL;;
		tree* ptr=NULL;;
		
		

		
		void insert(int value)
		{
			tree* temp=new tree;
			temp->data=value;
			temp->left=temp->right=NULL;
			
			if(root==NULL)
			{
				root=temp;
				ptr=root;
			}
			
			else
			{
				ptr=root;
				
				while(ptr->left!=NULL)
				ptr=ptr->left;
				
				if(ptr->data>temp->data)
				ptr->left=temp;
				
				
				ptr=root;
				
				while(ptr->right!=NULL)
				ptr=ptr->right;
				
				if(root->data<temp->data)
				ptr->right=temp;
			}
		}
		
		void set()
		{
			ptr=root;
		}
		
		void printPostorder(struct tree* node)
{
	if (node == NULL)
		return;

	// first recur on left subtree
	printPostorder(node->left);

	// then recur on right subtree
	printPostorder(node->right);

	// now deal with the node
	cout << node->data << " ";
}

/* Given a binary tree, print its nodes in inorder*/
void printInorder(struct tree* node)
{
	if (node == NULL)
		return;

	/* first recur on left child */
	printInorder(node->left);

	/* then print the data of node */
	cout << node->data << " ";

	/* now recur on right child */
	printInorder(node->right);
}

/* Given a binary tree, print its nodes in preorder*/
void printPreorder(struct tree* node)
{
	if (node == NULL)
		return;

	/* first print data of node */
	cout << node->data << " ";

	/* then recur on left subtree */
	printPreorder(node->left);

	/* now recur on right subtree */
	printPreorder(node->right);
}

		
};

int main()
{
	tree t;
	
	int a;
	
	do
	{
		cout<<"Enter a number to insert in the tree : ";
		cin>>a;
		
		if(a!=-1)
		t.insert(a);
	}
	while(a!=-1);
	
	t.printInorder(root);
	t.printPostOrder(root);
	t.printPreorder(root);
	
	
}
