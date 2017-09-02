//C++ Program for Linked List Representation of given Binary Tree(BT)
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
	return 0;
}