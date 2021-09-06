#include<iostream>
using namespace std;

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

int main()
{
    int arr[] = {2, 5, 30, 100, 4, 50};

    int size = sizeof(arr)/ sizeof(arr[1]);  // to find the size of array
    // cout<<"size = "<<size;

    cout<<"given array : ";
    for(int i=0; i< size; i++)
        cout<<arr[i]<<" "; 
        
    int max;
    max = greatest(arr, size);
    cout<<"\nlargest element in the given array is : "<<arr[max];
    return 0;
}