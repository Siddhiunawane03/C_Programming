#include<stdio.h>

void Pattern(int iRow, int iCol)
{
   

    for(int i= 1; i<= iRow ; i++)
    {
         int inum = 1;
       
        for(int j = 1; j<= iCol; j++)
        {
            printf("%d\t",inum);
            inum++;
            
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