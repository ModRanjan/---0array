#include<iostream>
using namespace std;

// Naive approach :
int greatest(int arr[], int n)
{
    int res = 0;
    for(int i = 1; i<n; i++)
    {
        if(arr[i] > arr[res])
            res = i;
    }
return res;
}

int second_Largest(int arr[], int n)
{
    int largest = greatest(arr, n);    // for finding the largest element
    int res = -1;

    for(int i=0; i<n; i++)
    {
        if(arr[i] != arr[largest])
        {
            if(res == -1)
            res = i;
        else if(arr[i] > arr[res])
            res = i;
        }
    }
    return res;
}

// efficient soln.
int Op_SecondLargest(int arr[], int n)
{
    int res = -1, largest = 0;

    for(int i=1; i<n; i++){
        if(arr[i] > arr[largest]){
            res = largest;
            largest = i;
        }
        else if(arr[i] != arr[largest])
        {
            if(res == -1 || arr[i] > arr[res])
                res = i;
        }
    }
    return res;
}

int main()
{
    int arr[] = {2, 5, 30, 100, 4, 50};

    int size = sizeof(arr)/ sizeof(arr[1]);  

    cout<<"given array : ";
    for(int i=0; i< size; i++)
        cout<<arr[i]<<" "; 
        
    int naiveMax, OPmax;
    // naiveMax = second_Largest(arr, size);
    OPmax = Op_SecondLargest(arr, size);

    // cout<<"\n2nd largest element in array (Naive approach) is : "<<arr[naiveMax];
    cout<<"\n2nd largest element in array (efficient approach) is : "<<arr[OPmax];
    return 0;
}