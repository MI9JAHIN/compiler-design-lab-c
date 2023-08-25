/*2. Write a C program that takes an array of integers as input from the user. The program should then determine and print the frequency of each unique element in the array.
hint: Enter the size of the array: 8
Enter the elements of the array: 4 2 4 7 2 9 4 7
Element frequency:
4 occurs 3 times
2 occurs 2 times
7 occurs 2 times
9 occurs 1 time*/
/*2. Write a C program that takes an array of integers as input from the user. The program should then determine and print the frequency of each unique element in the array.
hint: Enter the size of the array: 8
Enter the elements of the array: 4 2 4 7 2 9 4 7
Element frequency:
4 occurs 3 times
2 occurs 2 times
7 occurs 2 times
9 occurs 1 time*/
#include<stdio.h>
int main()
{
    int a, b;
    int n, i, j;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    printf("Array size :%d\n", n);
    int arr[n];
    printf("Enter the elements of the array :");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("array are :");
    for(i=0; i<n; i++)
    {
        printf(" %d ",arr[i]);
    }
    for(i=0; i<=n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            //If any duplicate found
            if(arr[i] == arr[j])
            {
                //arr[i]=temp;
                a=arr[j];
                b=i++;
            }
        }
    }
    printf("\n%d occurs ", a);
    printf("%d Times\n", b);
    return 0;
}