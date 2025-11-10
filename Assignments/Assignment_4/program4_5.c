#include<stdio.h>

int FactDiff(int iNo)
{
    int iSumNonFact = 0;
    int iSumFact = 0;
     
    for(int i= 1; i < iNo ;  i++)
    {
        if((iNo % i) == 0)
        {
            iSumFact +=i;
        }

        else if((iNo % i) != 0)
        {
            iSumNonFact +=i;
        }

       

    }


    return iSumNonFact - iSumFact;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d", iRet);

    return 0 ;
}