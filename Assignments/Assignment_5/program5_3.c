#include<stdio.h>

void ChkLeapYear(int year)
{
    if(((year % 4)==0 && (year%100) != 0 ) || ((year % 400)==0))
    {
        printf("the year is leap year");
    }

    else
    {
         printf("the year is not a leap year"); 
    }
}

int main()
{
    int yr;

    printf("Enter number:");
    scanf("%d", &yr);

    ChkLeapYear(yr);

    return 0;
}