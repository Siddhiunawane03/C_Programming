#include<stdio.h>


void DisplaySchedule(char ch)
{
    if(ch=='a'  || ch =='A')
    {
        printf("your exam is at 7 AM");
    }
    else if(ch=='B' || ch =='b')
    {
        printf("your exam is at 8:30 AM");
    }
    else if(ch=='C' || ch =='c')
    {
        printf("your exam is at 9:20 AM");
    }
    else if(ch=='D' || ch =='d')
    {
        printf("your exam is at 10:30 AM");
    }
    else
    {
        printf("invalid Division");
    }
    
}

int main()
{
    char cValue = '\0';
    

    printf("Enter the charector");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);


    return 0;
}