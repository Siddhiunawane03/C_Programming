#include<stdio.h>
#include<string.h>
void Reverse(char *str)
{
    char*start = str;
    char *end = str;
    char temp  = '\0';

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while (start < end)
    {
       temp = *start;
       *start = *end;
       *end = temp;

       start++;
       end++;

    }

    printf("\n");
       
}

int main()
{
    char arr[20];
    

    printf("Enter String : \n");
    scanf("%[^\n]s",arr);


    Reverse(arr);

    


    return 0;
}