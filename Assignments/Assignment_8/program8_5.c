#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    for(iCnt = 10; iCnt>=1; iCnt--)
    {
        printf("%d\n",iNo*iCnt);
    }

}

int main()
{
    int iValue1 = 0, iRet = 0;

    printf("Please enter NUmber");
    scanf("%d", &iValue1);

   
    Table(iValue1);


    return 0 ;
}