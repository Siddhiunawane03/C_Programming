#include<stdio.h>
#define TRUE  1
#define FALSE 0

typedef int BOOL;
BOOL ChkCapital(char ch)
{
    if(ch>='A' && ch<='Z')
    {
        return TRUE;
    }
    else if(ch>='a' && ch<='z')
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the charector");
    scanf("%c",&cValue);

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("it is a CAPITAL charector");
    }
    else
    {
        printf("it is NOT a CAPITAL charector");
    }



    return 0;
}