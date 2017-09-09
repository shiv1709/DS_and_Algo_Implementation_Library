// C++ program for implementation of Insertion Sort by iterative method

/*
***************************
Author@Shiv Pratap Singh
***************************
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
/* Function to sort an array using insertion sort*/
void InsertionSort(ll arr[], ll n)
{
   ll i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
 
       /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
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
    InsertionSort(arr,size);
    cout<<"Elements of the array after Insertion Sort by iterative method "<<endl;
    printArray_elements(arr,size);
    return 0;
}
