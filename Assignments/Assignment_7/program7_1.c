#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;
    for( i = 0 ; i < iNo ; i++)
    {
        printf("$ ");
        printf("* ");
    }
}

int main()
{
    int iValue = 0;
    printf("ENter number");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0 ;
}