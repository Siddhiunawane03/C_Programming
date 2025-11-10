#include<stdio.h>

void Display(int iNo)
{
    
    for(int i = 1; i <= 5; i++)
    {
        printf("%d ",iNo*i);
    }
}

int main()
{
    int iValue = 0;
    printf("ENter number");
    scanf("%d", &iValue);

    Display(iValue);

    return 0 ;
}