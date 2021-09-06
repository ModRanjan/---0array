// METHOD 1 (Using temp array)

// Input : arr[] = [1, 2, 3, 4, 5, 6, 7]
//* Output : arr[] = [2, 3, 4, 5, 6, 7, 1]

// Time complexity : O(n)
// Auxiliary Space : O(1)
#include<iostream>
using namespace std;

void leftRotatebyOne(int arr[], int n)       // function to rotate the elements by one
{
    int temp = arr[0];
    for (int i = 1; i < n; i++)
        arr[i-1] = arr[i];
    arr[n-1] = temp;
}

void printArray(int arr[], int n)           //  function to print an array 
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr)/ sizeof(arr[1]);
    int d=2;  
    leftRotatebyOne(arr, size);  

    printArray(arr, 7);
    return 0;
}