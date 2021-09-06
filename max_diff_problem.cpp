/*
max value of arr[j] - arr[i], such that j>i 
Input : arr[] = {2, 3, 10, 6, 4, 8, 1}
output : 8

Input : arr[] = {7, 9, 5, 6, 3, 2}
output : 2

Input : arr[] = {10, 20, 30}
output : 20

Input : arr[] = {30, 10, 8, 2}
output : -2
*/


#include<iostream>
#include<math.h>
using namespace std;

// Naive approach
int max_Diff(int arr[], int n)
{
    int res = arr[1] - arr[0];

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
            res = max(res, arr[j]-arr[i]);
    }
    return res;
}

// efficient approach
int OP_max_Diff(int arr[], int n)
{
    int res = arr[1] - arr[0];
    int minVal = arr[0];
    for(int i = 1; i<n; i++)
    {
        res = max(res,arr[i] - minVal);
        minVal = min(minVal, arr[i]);
    }
    return res;
}

int main()
{
    int arr[] = {2, 3, 10, 6, 4, 8, 1};

    int size = sizeof(arr)/sizeof(arr[1]);  

    cout<<"given array : ";
    for(int i=0; i< size; i++)
        cout<<arr[i]<<" ";
    int Naivemax, OPmax;
    cout<<"\n max. difference (naive approach) :";
    Naivemax = max_Diff(arr, size);    // O(n^2)
    cout<<arr[Naivemax];

    cout<<"\n max. difference (efficient approach) :";
    OPmax = OP_max_Diff(arr, size);    // O(n) - time comlx
    cout<<arr[OPmax];
    return 0;
}