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
    int n, i;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    printf("Array size :%d\n", n);
    int arr[n];
    printf("Enter the elements of the array :");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Element frequency:\n");
    for (int i = 0; i < n; i++) // array number gula abr loop use korlam
    {
        int count = 1; //number gulla koybar ace ta count korar jonno 1 theke gonona suru korbe
        if (arr[i] != -1) //next same value thakle ignor korbe. **help from google
        {
            for (int j = i + 1; j < n; j++)// abar loop calabo I+1 theke jemon 6 pailo 6 er por theke abr loop colbe
            {
                if (arr[j] == arr[i]) // je value ta count korteci oita jodi j=i(6=6) e true hoy tobe 
                {
                    count++;// increment 
                    arr[j] = -1; //je number gula count kora hoice oi same value repeted ar hobe na. **help from google
                }
            }
            printf("%d occurs %d time\n", arr[i], count);
        }
    }
    return 0;
}