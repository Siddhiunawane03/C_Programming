#include<stdio.h>

void ChkEvenOdd(int num)
{
    if( (num % 2) == 0)
    {
        printf("the number is even");
    }

    else
    {
        printf("the number is Odd");   
    }
}

int main()
{
    int number;

    printf("Enter number:");
    scanf("%d", &number);

    ChkEvenOdd(number);

    return 0;
}