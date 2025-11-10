#include<stdio.h>

int DollarToINR(int iDlr)
{
    int iINR = 0;
    iINR = iDlr * 70;

    return iINR;
}

int main()
{
    int iValue = 0, iRet =0;
    printf("Enter number of Usd");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);
    
    printf("VAlue in INR is  %d",iRet);


    return 0 ;
}