#include<stdio.h>

int FactRev(int iNo)
{
    
    for(int i = (iNo /2); i >=1 ; i--)
    {
        if((iNo % i)==0)
        {
            printf("%d",i); 
        }
    }

    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d", &iValue);

    FactRev(iValue);

   

    return 0 ;
}