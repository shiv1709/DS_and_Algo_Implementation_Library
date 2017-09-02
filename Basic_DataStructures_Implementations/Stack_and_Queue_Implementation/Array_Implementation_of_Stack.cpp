//C++ Program to Implement Stack using Array Data Structure
/*
***************************
Author@Shiv Pratap Singh
***************************
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define maxx 100000 //Maximum size of stack

ll stackk[maxx];
ll top=-1;//initializing top initially by -1

	void push(ll val)    // function to perform push operation in stack
	{
		if(top>=maxx-1)
			cout<<"stackk is full"<<endl;
		else
		{
			top++; //Increment the top
			stackk[top]=val;
			cout<<"Element enterted is pushed\n";
		}
	}


	void pop()  // function to perform pop operation in stack
	{
		if(top<=-1)
			cout<<"stackk is empty"<<endl;
		else{
			ll elepop=stackk[top];
			cout<<"element popped out ="<<elepop<<endl;
			top--; //Decrement the top
		}
	}

	
int main()
{
ll element,n,i;
cout<<"Enter  number of elements to push\n";
cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>element;
		push(element);
	}
	cout<<"Elements of Stack are(from top to bottom)"<<endl;
	for(i=0;i<n;i++)
	{
		pop();
	}
	return 0;
}