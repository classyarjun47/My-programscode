
//? 5. Write a program in C to check given number is prime or not.

#include <stdio.h>
int main()
{
    int n;

    printf("Enter the number");
    scanf("%d", &n);

    if (n%2==0)
    { 
        printf("given no are prime:%d", n);
    }
    else
    {
        printf("given no are not prime :%d", n);
    }
}
