#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0, iMul = 1;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    if(iNo == 0)
    {
        return 1;
    }

    for(iCnt = iNo; iCnt>=1; iCnt--)
    {
        if(iCnt%2 !=0)
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

   
    iRet = OddFactorial(iValue1);

    printf("Odd Factorial of number is %d", iRet);

    return 0 ;
}