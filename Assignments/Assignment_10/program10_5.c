#include<stdio.h>


double SquareMeter(int iVal)
{
   double dSqrMtr = 0.0;
   dSqrMtr = (double)iVal/ 0.0920 ;

   return dSqrMtr;
}

int main()
{
    int  iValue = 0.0;
    double dRet = 0.0;

    printf("Please area in square feet :");
    scanf("%d", &iValue);

    

   
    dRet = SquareMeter(iValue);

    printf("area in square meter is  %.2lf", dRet);

    return 0 ;
}