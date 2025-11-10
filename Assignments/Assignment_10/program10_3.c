#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMtr = 0;
    iMtr = iNo * 1000;

    return iMtr;
}

int main()
{
    int iValue = 0, iRet =0;
    printf("Enter Distance");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);
    
    printf("KM to Meter conversion is   %d",iRet);


    return 0 ;
}