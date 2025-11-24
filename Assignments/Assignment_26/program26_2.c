#include<stdio.h>

void Pattern(int iNo)
{
    
    for(int i= iNo; i>= 1 ; i--)
    {
        printf("%d\t#\t",i);
       
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