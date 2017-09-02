//C++ program to create Linked List representation of Binary Search Tree(BST) from given Array elements
/*
***************************
Author@Shiv Pratap Singh
***************************
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
//structure to create node of BST
struct node
{
ll data;
node *lc;
node *rc;
};

	node* createnewnode(ll data) // function to dynamically create new node of BST 
	{
		node *newnode=(node*)malloc(sizeof(node));
		if(newnode){
		newnode->data=data;
		newnode->lc=NULL;
		newnode->rc=NULL;
		return newnode;
		}
	}

	//function to insert elements to create or build BST
		node* build_BST(node* root,ll data){
			if(root==NULL){
				return createnewnode(data);
			}
			else{
				if(data<=root->data){
					root->lc=build_BST(root->lc,data);
				}
				else{
					if(data>root->data){
						root->rc=build_BST(root->rc,data);
					}
				}
				return root;
			}
		}


		void print_inorder_BST(node* root) // function to print inorder traversal of constructed BST
		{
			if(root){	
				print_inorder_BST(root->lc);
				cout<<root->data<<" ";
				print_inorder_BST(root->rc);

			}
		}


int main()
{
ll i,size;
cout<<"Enter size of array from which Binary Search Tree (BST) to be constructed\n";
cin>>size;
ll arr[size];
cout<<"Enter elements of array\n";
for(i=0;i<size;i++)
	{
	cin>>arr[i];
	}

	node* root=createnewnode(arr[0]);//considering first element of array as root node 
	for(i=1;i<size;i++)
		build_BST(root,arr[i]);// building BST from given array elements
	cout<<"Inorder Traversal of constructed BST from given array elements\n";
	print_inorder_BST(root);
	cout<<endl;
}