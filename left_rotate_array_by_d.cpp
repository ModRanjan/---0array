// naive soln

/*  Input : arr[] = {1, 2, 3, 4, 5, 6} d=2;
    output : arr[] = {3, 4, 5, 6, 1, 2}
 */
// METHOD 1 (using L_Rotate one by one)

#include<iostream>
using namespace std;

void leftRotatebyOne(int arr[], int n);                    // Function to left Rotate arr[] of size n by 1 

void l_Rotate_by_d(int arr[], int d, int n)                   // Function to left rotate arr[] of size n by d
{
    for (int i = 0; i < d; i++)
        leftRotatebyOne(arr, n);
}

void leftRotatebyOne(int arr[], int n)       // function to rotate the elements by one
{
    int temp = arr[0], i;
    for (i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];
    arr[i] = temp;
}

/* naive soln
//* METHOD 2 

 idea for efficient soln
 1) Store the first d elements in a temp array : temp[] = [1, 2]

 2) Shift rest of the arr[] : arr[] = [3, 4, 5, 6, 7, 6, 7]

 3) Store back the d elements : arr[] = [3, 4, 5, 6, 7, 1, 2]

*/

void L_rotate_by_D(int arr[], int n, int d)
{
    int temp[d];
    for(int i = 0; i<d; i++)                   // storing 1st d elements in temp[]
        temp[i] = arr[i];
    
    for(int i = d; i<n; i++)                    // rotating remaining (last n-d) elements
        arr[i-d] = arr[i];
    
    for(int i = 0; i<d; i++)                    // rotating whole array
        arr[n-d+i] = temp[i];
    
}

void printArray(int arr[], int n)           //  function to print an array 
{
    int i;
    for (i = 0; i < n; i++)
        cout<<arr[i];
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr)/ sizeof(arr[1]);
    int d=2;  
    l_Rotate_by_d(arr, d, size);        // naive soln 1        Time complexity : O(n * d)
                                                            // Auxiliary Space : O(1)

//  L_rotate_by_D(arr, size, d);        // naive soln 2        Time complexity : O(n)
                                                            // Auxiliary Space : O(d)
    printArray(arr, 7);
    return 0;
}

