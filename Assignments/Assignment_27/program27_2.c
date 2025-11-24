#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    char ch1 = '\0', ch2 ='\0';
    for(int i= 1; i<= iRow ; i++)
    {
        ch1 = 'A';
        ch2 = 'a';
        for(int j = 1; j<= iCol; j++)
        {
            if(i%2 != 0)
            {
                printf("%c\t",ch1);
                ch1++;
            }
            else
            {
                printf("%c\t",ch2);
                ch2++;
            }

        }
        printf("\n");
    }
   
}

int main()
{
    int iValue1 = 0, iValue2=0;
    printf("enter number of rows: ");
    scanf("%d",&iValue1);

    printf("enter number of columns:");
    scanf("%d",&iValue2);



    Pattern(iValue1,iValue2);

    return 0;
}