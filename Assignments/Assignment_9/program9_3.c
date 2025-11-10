#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0, iMul = 1;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt>=1; iCnt--)
    {
        if(iCnt%2 ==0)
        {
            iMul *= iCnt;
        }
        
    }

    return iMul;
}

int main()
{
    int iValue1 = 0, iRet = 0;

    printf("Please enter Number:");
    scanf("%d", &iValue1);

   
    iRet = EvenFactorial(iValue1);

    printf("Even Factorial of number is %d", iRet);

    return 0 ;
}