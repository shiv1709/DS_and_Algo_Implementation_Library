//C++ Program to Implement Queue using Circular Array Data Structure
/*
***************************
Author@Shiv Pratap Singh
***************************
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define maxx 100000 //Maximum size of Array used for Implementing Queue

ll queuee[maxx];
ll front=0,rear=0; // front and rear are pointers to front and last element of the queue respectively 
	
	void enqueuee(int data)  // function to insert(Enqueue) an element in Queue
	{
		if((rear+1)%maxx==front) // Overflow Condition
		{
			cout<<"Queue is full\n";
		}
		else
		{
			rear=(rear+1)%maxx;
			queuee[rear]=data;
		}
	}


	ll dequeuee()   // function to delete(Dequeue) an element in Queue
	{	int item;
		if(front==rear) //Underflow Condition
			{
				cout<<"queuee is empty\n";
				return -1;
			}
		else
		{
			front=(front+1)%maxx;
			item=queuee[front];
			return item;
		}
	}


	int main()
	{	char choice,ch;
		ll element,data,i;
		cout<<"Enter your choice\n";
		cout<<"Press 'e' for enqueuee,press 'x' to exit\n";
		cout<<"Press 'd' for dequeuee press 'x' to exit\n";
		cin>>choice;
		while(choice=='e' or choice=='d')
		{
			if(choice=='e')
			{	do
				{
					cout<<"enter element to insert in queuee\n";
					cin>>element;
					enqueuee(element);
					cout<<"Want to enqueuee more press(y/n)\n";
					cin>>ch;
				}while(ch=='y');
				cout<<"Elements of queue after enqueuee operation\n";
				for(i=front+1;i!=rear;)
					{
						cout<<queuee[i]<<" ";
						if(i==maxx-1)
							i=(i+1)%maxx;
						else
							i+=1;
					}
				cout<<queuee[i]<<endl;
			}
			else if(choice=='d')
			{
				do
				{	data=dequeuee();
					if(data!=-1)
					cout<<"front element from queuee is deleted is "<<data<<endl;
					cout<<"Want to dequeuee press(y/n)\n";
					cin>>ch;
				}while(ch=='y');
				cout<<"Elements of queuee after dequeuee operation\n";
				for(i=front+1;i!=rear;)
					{
						cout<<queuee[i]<<" ";
						if(i==maxx-1)
							i=(i+1)%maxx;
						else
							i+=1;
					}
				cout<<queuee[i]<<endl;

			}
			cout<<"Enter your choice\n";
			cout<<"Press 'e' for enqueuee,press 'x' to exit\n";
			cout<<"Press 'd' for dequeuee press 'x' to exit\n";
			cin>>choice;
		}
	}