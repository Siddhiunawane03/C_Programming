#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0, iMul = 1;
    for(iCnt = iNo; iCnt>=1; iCnt--)
    {
        iMul *= iCnt;
    }

    return iMul;
}

int main()
{
    int iValue1 = 0, iRet = 0;

    printf("Please enter Number:");
    scanf("%d", &iValue1);

   
    iRet = Factorial(iValue1);

    printf("Factorial of number is %d", iRet);

    return 0 ;
}