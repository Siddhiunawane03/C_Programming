#include<stdio.h>


void DisplayConvert (char cVAlue)
{
    if(cVAlue >= 65 && cVAlue < 91 )
    {
        printf("%c",cVAlue + 32);
    }
    else if(cVAlue >= 91 && cVAlue < 123)
    {
        printf("%c", cVAlue - 32);
    }

}

int main()
{
    int cValue = 0 ;
    printf("Enter charecter \n ");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0 ;
}