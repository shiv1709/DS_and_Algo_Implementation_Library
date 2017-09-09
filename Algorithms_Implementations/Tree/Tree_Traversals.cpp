//C++ program to print Inorder,Preorder,Postorder,DoubleOrder,TripleOrder Traversal of a Binary Tree

//This program first build Binary Tree entered by user and then prints all the Traversals mentioned above

/*
***************************
Author@Shiv Pratap Singh
***************************
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
struct node
{
	ll data;//considering data of each node is integer value
	node* lc;//lc is for storing pointer to the left child of node 
	node* rc;//rc is for storing pointer to the left child of node 

};
node* create_new_node(ll data)
{
	node* newnode=(node*)malloc(sizeof(node));
	newnode->data=data;
	newnode->lc=NULL;
	newnode->rc=NULL;
	return newnode;
}
void build_LINKLIST_BT(node* tree_node,ll node_count)//function to build Linked List Representation of BT 
{	char choice;
	ll node_data;
	if(tree_node!=NULL)// if the tree is not empty
	{	 //node_count is used to show user for which node number insertion as left or right child is asked
		cout<<"If Node "<<node_count<<" has left subtree(Y/N)\n";
		cout<<"Enter your choice\n";
		cin>>choice;
		if(choice=='Y')
		{
			cout<<"Enter data of Node to insert\n";
			cin>>node_data;
			node* left_node=create_new_node(node_data);
			tree_node->lc=left_node;
				build_LINKLIST_BT(left_node,2*node_count);
		}
			else
				build_LINKLIST_BT(NULL,node_count);//(for empty subtree)

		cout<<"If Node "<<node_count<<" has right subtree(Y/N)\n";
		cout<<"Enter your choice\n";
		cin>>choice;
		if(choice=='Y')
		{
			cout<<"Enter data of Node to insert\n";
			cin>>node_data;
			node* right_node=create_new_node(node_data);
			tree_node->rc=right_node;
				build_LINKLIST_BT(right_node,2*node_count+1);
		}
			else
				build_LINKLIST_BT(NULL,node_count);//(for empty subtree)

	}
}
void print_inorder_BT(node* tree_node)//function to print inorder traversal of Binary tree made by user
{	if(tree_node!=NULL)
	{
		print_inorder_BT(tree_node->lc);
		cout<<tree_node->data<<" ";
		print_inorder_BT(tree_node->rc);
	}
}
void print_preorder_BT(node* tree_node)//function to print preorder traversal of Binary tree made by user
{	if(tree_node!=NULL)
	{	
		cout<<tree_node->data<<" ";
		print_preorder_BT(tree_node->lc);
		print_preorder_BT(tree_node->rc);
	}
}
void print_postorder_BT(node* tree_node)//function to print postorder traversal of Binary tree made by user
{	if(tree_node!=NULL)
	{
		print_postorder_BT(tree_node->lc);
		print_postorder_BT(tree_node->rc);
		cout<<tree_node->data<<" ";
	}
}
void print_DoubleOrder_BT(node* tree_node)//function to print DoubleOrder traversal of Binary tree made by user
{	if(tree_node!=NULL)
	{	cout<<tree_node->data<<" ";
		print_DoubleOrder_BT(tree_node->lc);
		cout<<tree_node->data<<" ";
		print_DoubleOrder_BT(tree_node->rc);
	}
}
void print_TripleOrder_BT(node* tree_node)//function to print TripleOrder traversal of Binary tree made by user
{	if(tree_node!=NULL)
	{	cout<<tree_node->data<<" ";
		print_TripleOrder_BT(tree_node->lc);
		cout<<tree_node->data<<" ";
		print_TripleOrder_BT(tree_node->rc);
		cout<<tree_node->data<<" ";
	}
}
int main()
{	ll root_data;
	cout<<"Start building your Binary Tree\n";
	cout<<"Enter data of root node i.e. first node\n";
	cin>>root_data;
	node* root=create_new_node(root_data);
	build_LINKLIST_BT(root,1);
		cout<<"Inorder traversal of Linked List Representation of given Binary Tree(BT) \n";
	print_inorder_BT(root);
	cout<<endl;
	cout<<"Preorder traversal of Linked List Representation of given Binary Tree(BT) \n";
	print_preorder_BT(root);
	cout<<endl;
	cout<<"Postorder traversal of Linked List Representation of given Binary Tree(BT) \n";
	print_postorder_BT(root);
	cout<<endl;
	cout<<"DoubleOrder traversal of Linked List Representation of given Binary Tree(BT) \n";
	print_DoubleOrder_BT(root);
	cout<<endl;
	cout<<"TripleOrder traversal of Linked List Representation of given Binary Tree(BT) \n";
	print_TripleOrder_BT(root);
	cout<<endl;
	return 0;
}
