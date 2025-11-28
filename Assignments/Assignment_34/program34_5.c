#include<stdio.h>


void DisplaySchedule(char ch)
{
    printf("DEcimal: %d\n",ch);
    printf("Octal: 0%o\n",ch);
    printf("Hexadecimal : 0x%x");

    
}

int main()
{
    char cValue = '\0';
    

    printf("Enter the charector");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);


    return 0;
}