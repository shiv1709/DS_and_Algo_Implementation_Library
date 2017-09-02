// Recursive C++ program for Insertion Sort
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
// Recursive function to sort an array using
// insertion sort
void InsertionSort_Recursive(ll arr[], ll n)
{
    // Base case
    if (n <= 1)
        return;
 
    // Sort first n-1 elements
    InsertionSort_Recursive( arr, n-1 );
 
    // Insert last element at its correct position
    // in sorted array.
    int last = arr[n-1];
    int j = n-2;
 
    /* Move elements of arr[0..i-1], that are
      greater than key, to one position ahead
      of their current position */
    while (j >= 0 && arr[j] > last)
    {
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = last;
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
    InsertionSort_Recursive(arr,size);
    cout<<"Elements of the array after Insertion Sort by recursive method "<<endl;
    printArray_elements(arr,size);
    return 0;
}