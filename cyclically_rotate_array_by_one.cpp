//! Program to cyclically rotate an array by one

// Examples:

// Input:  arr[] = {1, 2, 3, 4, 5}
// Output: arr[] = {5, 1, 2, 3, 4}
// algo :-
// Following are steps.
// 1) Store last element in a variable say x.
// 2) Shift all elements one position ahead.
// 3) Replace first element of array with x.

#include <iostream>
using namespace std;

void Cycli_rotate_by_one(int arr[], int n) 
{ 
    int x = arr[n - 1], i; 
    for (i = n - 1; i > 0; i--) 
    arr[i] = arr[i - 1];  
    arr[0] = x; 
} 

int main() 
{ 
	int arr[] = {1, 2, 3, 4, 5}, i; 
	int size = sizeof(arr)/sizeof(arr[0]); 

	printf("Given array is\n"); 
	for (i = 0; i < size; i++) 
		printf("%d ", arr[i]); 
Cycli_rotate_by_one(arr, size);

	printf("\nRotated array is\n"); 
	for (i = 0; i < size; i++) 
		printf("%d ", arr[i]); 

	return 0; 
}
