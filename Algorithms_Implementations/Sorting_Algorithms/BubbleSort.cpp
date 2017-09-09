// C++ program for implementation of optimized Bubble Sort by iterative method

//C++ Program for Linked List Representation of given Binary Tree(BT)
/*
***************************
Author@Shiv Pratap Singh
***************************
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void swap(ll *val1, ll *val2)
{
    ll temp = *val1;
    *val1 = *val2;
    *val2 = temp;
} 

// An optimized version of Bubble Sort
void BubbleSort(ll arr[], ll n)
{
   ll i, j;
   bool swapped;
   for (i = 0; i < n-1; i++)
   {
     swapped = false;
     for (j = 0; j < n-i-1; j++)
     {
        if (arr[j] > arr[j+1])
        {
           swap(&arr[j], &arr[j+1]);
           swapped = true;
        }
     }
 
     // IF no two elements were swapped by inner loop, then break
     if (swapped == false)
        break;
   }
}
 
/* Function to print an array */
void printArray_elements(ll arr[], ll size)
{
    int i;
    for (i=0; i < size; i++)
       cout<<arr[i]<<" ";
   cout<<endl;
}
 
// Driver program to test above functions
int main()
{
   ll size,i;
    cout<<"Enter size of the array "<<endl;
    cin>>size;
    ll arr[size];
    cout<<"Enter elements of the array"<<endl;
    for(i=0;i<size;i++)
        cin>>arr[i];
    BubbleSort(arr,size);
    cout<<"Elements of the array after Bubble Sort by iterative method "<<endl;
    printArray_elements(arr,size);
    return 0;
}
