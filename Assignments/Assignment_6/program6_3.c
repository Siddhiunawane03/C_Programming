#include<stdio.h>
#include<stdbool.h>

bool ChkEqual( int a, int b)
{
    if(a == b)
    {
        return true;
    }

    else
    {
        return false;
    }
    
}

int main()
{
    int num1, num2;
    bool bRet = false;
    printf("Enter two numbers: ");
    scanf("%d,%d",&num1, &num2);

    bRet = ChkEqual(num1 , num2);

    if(bRet == true)
    {
        printf("Equal");
    }

    else
    {
        printf("Not Equal");
    }
    
    return 0;
}