#include<iostream>
using namespace std;

// Naive approach :
#include<iostream>
using namespace std;

// Naive approach :

// Naive approach :
void move_Zeros_ToEnd(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i] == 0)
        {    for(int j=i+1; j<n; j++)
                if(arr[j] != 0)
                {
                    int temp;
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }    
        }
    }
    
    cout<<endl;
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
}

// efficient soln.
void Op_move_Zeros_ToEnd(int arr[], int n)
{
    int count = 0;

    for(int i=0; i<n; i++)
        if(arr[i] != 0)
        {   
             int temp;
             temp = arr[i];
             arr[i] = arr[count];
             arr[count] = temp; 
             
             count++;
        }
    cout<<endl;
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
}

int main()
{
    int arr[] = {2, 0, 30, 0, 0, 50};

    int size = sizeof(arr)/ sizeof(arr[1]);  

    cout<<"given array : ";
    for(int i=0; i< size; i++)
        cout<<arr[i]<<" "; 
        
    move_Zeros_ToEnd(arr, size);
    Op_move_Zeros_ToEnd(arr, size);
    return 0;
}
