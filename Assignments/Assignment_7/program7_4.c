#include<stdio.h>

void Display(int iNo)
{
    
    for(int i = 1; i <= iNo ; i++)
    {
        if(i % 2  != 0)
        {
        printf("%d", i);
        }
        
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