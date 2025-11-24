#include<stdio.h>

void Pattern(int iRow, int iCol)
{
  
    for(int i= 1; i<= iRow ; i++)
    {
        int iNum = 1;
        int No = 2;
        
        for(int j = 1; j<= iCol; j++)
        {
            if((i%2) ==0)
            {
                printf("%d\t",iNum);
                iNum +=2;
            }
            else
            {
                printf("%d\t",No);
                No +=2;
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