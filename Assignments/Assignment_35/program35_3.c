#include<stdio.h>

int Difference(char *str)
{
    int iCountSmall= 0;
    int iCountCapital = 0;

    // filter
    
    while (*str != '\0')
    {
       if(*str>='a' && *str <='z')
       {
            iCountSmall++;
       }
       else if(*str>='A' && *str <='Z')
       {
            iCountCapital++;
       }
       str++;
    }

    return (iCountSmall-iCountCapital);
    
}

int main()
{
    char arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^\n]s",arr);

    iRet = Difference(arr);

    printf("%d",iRet);

    return 0;
}