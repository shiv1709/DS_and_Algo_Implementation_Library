//C++ Program for Implementation of Linear Search

/*
***************************
Author@Shiv Pratap Singh
***************************
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
// Linearly search element in arr[].  If x is present then return the index,
// otherwise return -1
ll linearsearch(ll arr[], ll size, ll element)
{
    ll i;
    for (i=0; i<size; i++)
    {
       if (arr[i] == element)
         return i;
    }
    return -1;// return -1 if element is not found 
}
 
int main()
{
ll ele,size,i,location;
cout<<"Enter size of the array"<<endl;
cin>>size;
ll arr[size];
cout<<"Enter elements of array"<<endl;
for(i=0;i<size;i++)
cin>>arr[i];
cout<<"Enter element you want to search"<<endl;
cin>>ele;
location=linearsearch(arr,size,ele);
if(location==-1)
cout<<"Element not found in the given array"<<endl;
else
cout<<"Element "<<ele<<" found at index "<<location<<" of the array"<<endl;
    return 0;
}
