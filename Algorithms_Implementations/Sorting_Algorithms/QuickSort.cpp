/* C++ implementation of QuickSort */

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void swap(ll* val1, ll* val2)
{
    ll temp = *val1;
    *val1 = *val2;
    *val2 = temp;
}
 
/* This function takes last element as pivot, places
   the pivot element at its correct position in sorted
    array, and places all smaller (smaller than pivot)
   to left of pivot and all greater elements to right
   of pivot */
ll partition (ll arr[], ll low, ll high)
{
    ll pivot = arr[high];    // pivot
    ll i = (low - 1);  // Index of smaller element
 
    for (ll j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
 
/* The main function that implements QuickSort
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index */
void QuickSort(ll arr[], ll low, ll high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(arr, low, high);
 
        // Separately sort elements before
        // partition and after partition
        QuickSort(arr, low, pi - 1);
        QuickSort(arr, pi + 1, high);
    }
}
 
/* UTILITY FUNCTIONS */
/* Function to print an array */
void printArray_elements(ll arr[], ll size)
{
    ll i;
    for (i=0; i < size; i++)
       cout<<arr[i]<<" ";
   cout<<endl;
}  
 
/* Driver program to test above functions */
int main()
{
   ll size,i;
    cout<<"Enter size of the array "<<endl;
    cin>>size;
    ll arr[size];
    cout<<"Enter elements of the array"<<endl;
    for(i=0;i<size;i++)
        cin>>arr[i];
    QuickSort(arr,0,size-1);
    cout<<"Elements of the array after Quick Sort "<<endl;
    printArray_elements(arr,size);
    return 0;
}