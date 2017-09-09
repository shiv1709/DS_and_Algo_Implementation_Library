// C++ program for implementation of selection sort

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
 
void SelectionSort(ll arr[], ll n)
{
    ll i, j, min_index;
 
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_index = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_index])
            min_index = j;
 
        // Swap the found minimum element with the first element
        swap(&arr[min_index], &arr[i]);
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
    SelectionSort(arr,size);
    cout<<"Elements of the array after Selection Sort"<<endl;
    printArray_elements(arr,size);
    return 0;
}
