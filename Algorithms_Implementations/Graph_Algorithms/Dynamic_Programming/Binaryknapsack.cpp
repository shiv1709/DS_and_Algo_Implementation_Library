//C++ Program for Linked List Representation of given Binary Tree(BT)
/*
***************************
Author@Shiv Pratap Singh
***************************
*/
#include<bits/stdc++.h>
using namespace std;
int binknapsack(int cap,int val[],int wt[],int n)
{
int i,w;
int k[n+1][cap+1];
for(i=0;i<=n;i++)
{
for(w=0;w<=cap;w++)
{
if(i==0 or w==0)
k[i][w]=0;
else
if(wt[i-1]<=w)
k[i][w]=max((val[i-1]+k[i-1][w-wt[i-1]]),k[i-1][w]);
else
k[i][w]=k[i-1][w];
}
}
return k[n][cap];
}
int main()
{
int cap=5;
cout<<"Enter capacity of knapsack\n";
cin>>cap;
int val[]={3,7,2,9};
int wt[]={2,3,4,5};
int n=sizeof(val)/sizeof(val[0]);

int prf=binknapsack(cap,val,wt,n);
cout<<"Maximum profit obtained= "<<prf<<endl;
return 0;
} 
