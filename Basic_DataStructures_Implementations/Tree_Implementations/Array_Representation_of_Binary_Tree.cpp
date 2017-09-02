//C++ Program for Array or Sequential Representation of given Binary Tree(BT)
/*
***************************
Author@Shiv Pratap Singh
***************************
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll size,height;
void build_SEQ_BT(ll arr_BT[],ll index,ll item)//function to build Sequential Representation of BT 
{	char choice;
	ll data;
	if(index!=0)
	{
		arr_BT[index]=item;
		cout<<"If Node"<<index<<"has left subtree(Y/N)\n";
		cout<<"Enter your choice\n";
		cin>>choice;
		if(choice=='Y')
		{
			if(2*index<=size)
				{	cout<<"Enter data of Node to insert\n";
			cin>>data;
				build_SEQ_BT(arr_BT,2*index,data);
			}
			else
				build_SEQ_BT(arr_BT,0,-10000000000000);//condisering -10000000 as NULL data
		}
		cout<<"If Node"<<index<<"has right subtree(Y/N)\n";
		cout<<"Enter your choice\n";
		cin>>choice;
		if(choice=='Y')
		{
			if(2*index+1<=size)
				{	cout<<"Enter data of Node to insert\n";
			cin>>data;
				build_SEQ_BT(arr_BT,2*index+1,data);
			}
			else
				build_SEQ_BT(arr_BT,0,-10000000000000);//condisering -10000000000000 as NULL data
		}

	}
}
void print_SEQ_BT(ll arr_BT[])
{
	cout<<"Array or Sequential Representation of given Binary Tree(BT) \n";
	cout<<"Here -1 indicates that no node exists at the ith index\n";
	for(ll i=1;i<=size;i++)
		cout<<arr_BT[i]<<" ";
	cout<<endl;

}
int main()
{	ll root_data,i;
	cout<<"Enter height of binary tree\n";
	cin>>height;
	size=pow(2,height)-1;//size of array calculated here considering full BT(Binary Tree)
	ll arr_BT[size+1];//for storing BT in 1 indexed based array
	for(i=0;i<=size;i++)
		arr_BT[i]=-1;//-1 indicates that no node exists at the ith index
	cout<<"Enter data of root node i.e. first node";
	cin>>root_data;
	build_SEQ_BT(arr_BT,1,root_data);
	print_SEQ_BT(arr_BT);
	return 0;
}