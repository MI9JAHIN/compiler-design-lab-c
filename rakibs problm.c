/*1. Write a C program that takes an array of integers as input from the user and finds the maximum element in the array. Print the maximum element along with its position in the array (0-based index).

hint: Enter the size of the array: 6
Enter the elements of the array: 14 7 23 9 12 18
The maximum element is 23, found at position 2.*/
#include <stdio.h>
int main() 
{
    int n; // Number of elements in the array
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    printf("Array size :%d\n", n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the elements of the array : ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
