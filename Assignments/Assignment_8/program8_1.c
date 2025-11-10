#include<stdio.h>

void Number(int iNo)
{
    if(iNo<= 50)
    {
        printf("Small");
    }
    else if(50 < iNo <= 100)
    {
        printf("Medium");
    }
    else
    {
        printf("Large");
    }
}

int main()
{
    int iValue = 0;
    printf("ENter number");
    scanf("%d", &iValue);

    Number(iValue);

    return 0 ;
}