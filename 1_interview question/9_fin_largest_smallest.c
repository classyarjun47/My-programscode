
//? 9.C program to find the smallest and largest element in an array

#include <stdio.h>

int main()
{
    int arr[50], n, large, small;

    printf("\nEnter the number of elements : ");
    scanf("%d", &n);

    printf("\n Input the array elements : ");

    for (int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);

    large = small = arr[0];

    for (int i = 1; i < n; ++i)
    {
        if (arr[i] > large)
            large = arr[i];

        if (arr[i] < small)
            small = arr[i];
    }

    printf("\nThe smallest element is % d\n", small);

    printf("\n The largest element is % d\n", large);

    return 0;
}