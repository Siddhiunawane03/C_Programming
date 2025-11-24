#include<stdio.h>

void Pattern(int iNo)
{
    int even = 2;
    for(int i= 1; i<= iNo ; i++)
    {

        printf("%d ",even);
        even+=2;
       
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("enter number of elements ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}