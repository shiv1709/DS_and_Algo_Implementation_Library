//C++ Program for Implementation of Binary Search

/*
***************************
Author@Shiv Pratap Singh
***************************
*/

#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int l,int r,int x)
{
if(l<=r)
{
int m=l+(r-l)/2;
if(arr[m]==x)
return m;
else
if(arr[m]>x)
return binarysearch(arr,l,m-1,x);
else
return binarysearch(arr,m+1,r,x);
}
return (-1);
}
int main()
{
int x=67;
int arr[]={45 ,67 ,89,94};
int n=sizeof(arr)/sizeof(arr[0]);
int res=binarysearch(arr,0,n-1,x);
cout<<res<<endl;
}
