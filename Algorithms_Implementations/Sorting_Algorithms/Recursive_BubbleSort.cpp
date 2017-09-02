/* C++ program for recursive implementation of Bubble sort */

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
// A function to implement bubble sort
void BubbleSort_Recursive(ll arr[], ll n)
{
    // Base case
    if (n == 1)
        return;
 
    // One pass of bubble sort. After
    // this pass, the largest element
    // is moved (or bubbled) to end.
    for (int i=0; i<n-1; i++)
        if (arr[i] > arr[i+1])
            swap(arr[i], arr[i+1]);
 
    // Largest element is fixed,
    // recur for remaining array
    BubbleSort_Recursive(arr, n-1);
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
    BubbleSort_Recursive(arr,size);
    cout<<"Elements of the array after Bubble Sort by recursive method"<<endl;
    printArray_elements(arr,size);
    return 0;
}