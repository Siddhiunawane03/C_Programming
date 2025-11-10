#include<stdio.h>

void ChkEvenOdd(int num)
{
    if(num > 0)
    {
        printf("Positive");
    }

    else if(num < 0)
    {
        printf("Negative");   
    }

    else if(num == 0)
    {
        printf("Zero");
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