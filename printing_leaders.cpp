// Leader in an ARRAY
// ---------------------
/*
Input  : arr[] : {7, 10, 4, 3, 6, 5, 2}
Output : 10 6 5 2

Input  : arr[] : {10, 20, 30}
Output : 30

Input  : arr[] : {30, 20, 10}
Output : 30 20 10

A leader has to be greater than all the elements in the right side of it
So, if there is an element with same value then that is not consider as leader element.
example:
        Input  : arr[] : {7, 10, 4, 10, 6, 5, 2}
        Output : 10 6 5 2
*/


#include<iostream>
using namespace std;

// Naive approach
void leaders(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        bool flag = false;
        for(int j= i+1; j< n; j++)
        {
            if(arr[i] <= arr[j])
            {
                flag = true;
                break;
            }
        }
        if(flag == false)
            cout<<arr[i]<<" ";
    }
}

// Efficient approach 
// idea is to print the leaders from last of the array
void OP_leaders(int arr[], int n)
{
    int curr_leader = arr[n-1];
    cout<<curr_leader<<" ";

    for(int i =n-2; i>=0; i--)
    {
        if(curr_leader < arr[i])
        {
            curr_leader = arr[i];
            cout<<curr_leader<<" ";
        }
    }
}

int main()
{
    int arr[] = {7, 10, 4, 3, 6, 5, 2};

    int size = sizeof(arr)/sizeof(arr[1]);  

    cout<<"given array : ";
    for(int i=0; i< size; i++)
        cout<<arr[i]<<" ";

    cout<<"\n leaders (Naive method):";         // o(n^2)- time complexity
    leaders(arr, size);

    cout<<"\n leaders (Efficient method):";    //o(n)- time complexity
    OP_leaders(arr, size);
    return 0;
}
