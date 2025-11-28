#include<stdio.h>

void DisplayASCII()
{
    char ch = '\0';
    for(int ch=0; ch<= 255; ch++)
    {
        printf("%c : %d \n",ch,ch);
    }
}


int main()
{
    DisplayASCII();

    return 0;
}