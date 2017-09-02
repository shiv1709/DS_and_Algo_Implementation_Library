//C++ Program to Implement Stack using Linked List Data Structure
/*
***************************
Author@Shiv Pratap Singh
***************************
*/
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
typedef long long int ll;
//structure to create node of linked list used to implement Stack
struct node
{	int data;
	struct node *link;
};

typedef struct node ds;
ds* top=NULL; //Initially top pointer is initialized with NULL value
ds* header; // header is pointer to the HEADER NODE of Linked List used to implement Stack

ds* create_new_node(int data) //function to create a new node with given data passed as argument
{
	ds* nod=(ds*)malloc(sizeof(struct node));
	nod->data=data;
	nod->link=NULL;
	return nod;
}
//In Linked List Representation of Stack ,top of Stack is the node after header node of Stack(if Stack is not empty)
	
	void push(int ele) // function to perform push operation in stack
	{
		ds* newnode= create_new_node(ele);
		newnode->link=header->link;
			header->link=newnode;
			top=newnode;

	}
	void pop()   // function to perform pop operation in stack
	{
		if(top==NULL)
		{
			cout<<"Underflow - no element in stack to pop";
		}
		else
		{
			header->link=top->link;
			free(top);
			top=header->link;
		}
	}
int main()
{
	header=create_new_node(-1);
	char ch;
	ll element,choice;
	cout<<"press 1 for push operation in stack and -1 to exit \n";
	cout<<"press 2 for pop operation in stack and -1 to exit \n";
	cin>>choice;
	while(choice==1 or choice==2)
	{
	if(choice==1)
	{
		do
		{
			cout<<"enter element to push in stack\n";
			cin>>element;
			push(element);
			cout<<"Want to push more element press (y/n)\n";
			cin>>ch;
		}while(ch=='y');
		cout<<"Element at the top of satck is "<<top->data<<endl;
		cout<<"All elements of stack from top to bottom are\n";
		ds* ptr;
		ptr=header->link;
		while(ptr!=NULL)
		{
			cout<<ptr->data<<" ";
			ptr=ptr->link;
		}
		cout<<endl;
	 }
	 else if(choice==2)
	 {
	  do{
	  	pop();
	  	cout<<"Top element is popped out\n";
	  	cout<<"Want to pop more element press (y/n)\n";
			cin>>ch;
	  }while(ch=='y');
	  cout<<"Element at the top of satck is "<<top->data<<endl;
		cout<<"All elements of stack from top to bottom are\n";
		ds* ptr;
		ptr=header->link;
		while(ptr!=NULL)
		{
			cout<<ptr->data<<" ";
			ptr=ptr->link;
		}
		cout<<endl;
	 }
	cout<<"Enter your choice again\n";
		cout<<"press 1 for push operation in stack and -1 to exit \n";
	cout<<"press 2 for pop operation in stack and -1 to exit \n";
	cin>>choice;
	}
}
