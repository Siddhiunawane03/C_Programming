#include<stdio.h>

void Display(char ch)
{
    if(ch >='a' && ch <='z')
    {
        for(char i = ch; i >= 'a'; i-- )
        {
            printf("%c  ",i);
        }
    }

    else if (ch>='A'&& ch<= 'Z')
    {
        for(char i = ch; i <= 'Z'; i++ )
        {
            printf("%c  ",i);
        }   
    }
    else
    {

    }
    
    
}

int main()
{
    char cValue = '\0';
    
    printf("Enter the charecter");
    scanf("%c",&cValue);

    Display(cValue);


    return 0;
}