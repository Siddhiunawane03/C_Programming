#include<stdio.h>
#include<stdbool.h>


bool ChkVowel(char C)
{
    if(C == 'a'|| C == 'e' || C== 'i'||C == 'o' || C == 'u' && C == 'A' || C =='E'|| C =='I'|| C =='O'|| C =='U')
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
    char cValue = '\0';
    bool bRet = false;

    printf("Enter Charecter\n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == true)
    {
        printf("it is a Vowel");
    }
    else
    {
        printf("it is not Vowel");
    }

    return 0;

}