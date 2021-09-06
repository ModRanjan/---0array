// Remove Duplicates from sorted array
#include<iostream>
using namespace std;

// Naive approach :
int rem_Dup(int arr[], int n)
{
    int temp[n];
    temp[0] = arr[0];
    int res = 1;

    for(int i= 1; i<n; i++)
    {
        if(temp[res-1] != arr[i])
        {
            temp[res] = arr[i];
            res++;
        }
    }

    for(int i = 0; i<res; i++)
    {
        arr[i] = temp[i];
    }
    return res;
}

// efficient approach :
int OP_rem_Dup(int arr[], int n)
{
    int res = 1;

    for(int i = 1; i<n; i++)
    {
        if(arr[i] != arr[res-1]){
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}

int main()
{
    int arr[] = {2, 5, 5, 100, 500, 500};

    int size = sizeof(arr)/ sizeof(arr[1]);  

    cout<<"given array : ";
    for(int i=0; i< size; i++)
        cout<<arr[i]<<" "; 
        
    int naive_remDup, OP_remDup;
    
// print the resultant array from naive approach :
    naive_remDup = rem_Dup(arr, size);
    cout<<"\nremove duplicate elements from array (Naive approach): ";
    for(int i=0; i < naive_remDup; i++)
        cout<<arr[i]<<" ";

// print the resultant array from efficient approach :
    OP_remDup = rem_Dup(arr, size);
    cout<<"\nremove duplicate elements from array (efficient approach): ";
    for(int i=0; i< OP_remDup; i++)
        cout<<arr[i]<<" ";
        
    return 0;
}