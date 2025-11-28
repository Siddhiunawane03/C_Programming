#include<stdio.h>

int CountSmall(char *str)
{
    int iCount = 0;

    // filter
    
    while (*str != '\0')
    {
       if(*str>='a' && *str <='z')
       {
            iCount++;
       }
       str++;
    }

    return iCount;
    
}

int main()
{
    char arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^\n]s",arr);

    iRet = CountSmall(arr);

    printf("%d",iRet);

    return 0;
}