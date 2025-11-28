#include<stdio.h>
#define TRUE  1
#define FALSE 0

typedef int BOOL;
BOOL ChkVowel(char *ch)
{
    while (*ch != '\0')
    {
       if(*ch=='a' || *ch=='e'||*ch=='i'||*ch == 'o'|| *ch =='u'||
       *ch=='A' || *ch=='E'||*ch=='I'||*ch == 'O'|| *ch =='U')
       {
            return TRUE;
       }
       ch++;
    }
    return FALSE;
}

int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter String : \n");
    scanf("%[^\n]s",arr);


    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("contains vowel");
    }
    else 
    {
        printf("there is no vowel");
    }
    


    return 0;
}