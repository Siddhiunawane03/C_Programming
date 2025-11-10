#include<stdio.h>

int FindMax(int a, int b , int c)
{
    if(a > b && a > c)
    {
        return a;
    }

    else if (b > c)
    {
        return b;
    }

    else 
    {
        return c;
    }
    
}

int main()
{
    int num1, num2, num3, result;
    printf("Enter two numbers: ");
    scanf("%d %d %d",&num1, &num2, &num3);

    result = FindMax(num1 , num2, num3);
    printf("Maximum of the three numbers is  %d\n",result);
    return 0;
}