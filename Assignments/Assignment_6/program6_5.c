#include<stdio.h>

float Percentage(int iTotMark , int iMark)
{
    float fPer = 0;
    fPer = ((float)iMark/iTotMark)*100;
    return fPer;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0;

    printf("Please enter total marks");
    scanf("%d", &iValue1);

    printf("Enter number");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1 ,iValue2);

    printf("Percentage is : %.2f%%\n", fRet);

    return 0 ;
}