#include<stdio.h>

int SumNonFact(int iNo)
{
    int iSum = 0;
     for(int i= 1; i < iNo ;  i++)
    {
        if((iNo % i) != 0)
        {
            iSum +=i;
        }
    }


    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("%d", iRet);

    return 0 ;
}