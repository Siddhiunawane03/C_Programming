#include<stdio.h>
#include<stdbool.h>

bool ChkEven(int iNo)
{
    bool bAns = false;
    if((iNo % 2) == 0)
    {
        bAns = true;
    }
    else
    {
        bAns = false;
    }

    return bAns;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    if(bRet == true)
    {
        printf("The number is Even");
    }
    else
    {
        printf("The number is Odd");
    }

    
}