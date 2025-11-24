#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    char ch = '\0';
    for(int i= 1; i<= iRow ; i++)
    {
        ch = 'A';
        for(int j = 1; j<= iCol; j++)
        {
            printf("%c\t",ch);
            ch++;
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