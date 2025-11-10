#include<stdio.h>

int Multiply(int a, int b , int c)
{
    int iMul = 0;
    iMul = a*b*c;
   return iMul; 
}

int main()
{
    int num1, num2, num3, iRet;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&num1, &num2, &num3);

    iRet = Multiply(num1 , num2, num3);
    printf("Multiplication of the three numbers is  %d\n",iRet);
    return 0;
}