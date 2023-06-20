#include <stdio.h>

void checkEvenOdd();

int main()
{
    int num;

    printf("Enter The Number To Check Even or Odd\n");
    scanf("%d", &num);
    checkEvenOdd(num);
}
void checkEvenOdd(int num)
{
    if (num % 2 == 0)
    {
        printf("It is Even\n");
    }
    else
    {
        printf("It is odd\n");
    }
}