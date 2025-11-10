#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0, iMulEven = 1,iMulOdd = 1 , iDiff =0;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    if (iNo == 0)
        return 0;


    for(iCnt = iNo; iCnt>=1; iCnt--)
    {
        if(iCnt%2 ==0)
        {
            iMulEven *= iCnt;
        }

        else
        {
            iMulOdd *= iCnt;
        }
        
    }

    iDiff = iMulEven - iMulOdd;



    return iDiff;
}

int main()
{
    int iValue1 = 0, iRet = 0;

    printf("Please enter Number:");
    scanf("%d", &iValue1);

   
    iRet = FactorialDiff(iValue1);

    printf("Factorial difference is %d", iRet);

    return 0 ;
}