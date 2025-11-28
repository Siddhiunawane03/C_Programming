#include<stdio.h>
#define TRUE  1
#define FALSE 0

typedef int BOOL;
BOOL ChkSmall(char ch)
{
    if(ch>='a' && ch<='z')
    {
        return TRUE;
    }
    else if(ch>='A' && ch<='Z')
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

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("it is small case charector");
    }
    else 
    {
        printf("it is not a small case charector");
    }
    


    return 0;
}