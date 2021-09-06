
// Method 4 (The Reversal Algorithm) :

// Algorithm :
//   rotate(arr[], d, n)
//   reverse(arr[], 1, d) ;
//   reverse(arr[], d + 1, n);
//   reverse(arr[], 1, n);

// Example :
// Let the array be arr[] = [1, 2, 3, 4, 5, 6, 7], d =2 and n = 7
// A = [1, 2] and B = [3, 4, 5, 6, 7]

// Reverse A, we get ArB = [2, 1, 3, 4, 5, 6, 7]
// Reverse B, we get ArBr = [2, 1, 7, 6, 5, 4, 3]
// Reverse all, we get (ArBr)r = [3, 4, 5, 6, 7, 1, 2]

//* Time Complexity : O(n)

// C/C++ program for reversal algorithm of array rotation 
#include <stdio.h> 

/*Utility function to print an array */
void printArray(int arr[], int size); 

/* Utility function to reverse arr[] from start to end */
void rvereseArray(int arr[], int start, int end); 

/* Function to left rotate arr[] of size n by d */
void leftRotate(int arr[], int d, int n) 
{ 

	if (d == 0) 
		return; 
	rvereseArray(arr, 0, d - 1); 
	rvereseArray(arr, d, n - 1); 
	rvereseArray(arr, 0, n - 1); 
} 

/*UTILITY FUNCTIONS*/
/* function to print an array */
void printArray(int arr[], int size) 
{ 
	int i; 
	for (i = 0; i < size; i++) 
		printf("%d ", arr[i]); 
} 

/*Function to reverse arr[] from index start to end*/
void rvereseArray(int arr[], int start, int end) 
{ 
	int temp; 
	while (start < end) { 
		temp = arr[start]; 
		arr[start] = arr[end]; 
		arr[end] = temp; 
		start++; 
		end--; 
	} 
} 


int main() 
{ 
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	int d = 2; 

	// in case the rotating factor is greater than array length 
	d = d % n; 
	leftRotate(arr, d, n); 
	printArray(arr, n); 
	return 0; 
} 
