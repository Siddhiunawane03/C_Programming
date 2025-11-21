#include<stdio.h>
#include<stdlib.h>
int Digits(int Arr[], int iLength)
{
    
    int iCnt = 0;
    for(iCnt = 0 ; iCnt < iLength; iCnt++)
    {
       int iDigit = 0;
       int iNo = Arr[iCnt];
       while (iNo != 0)
       {
            iNo/=10;
            iDigit++;
       }

       if(iDigit == 3)
       {
            printf("%d ",Arr[iCnt]);
       }
        
        
    }
    
}


int main()
{
    int iSize = 0 ,iCnt = 0;
    int *ptr = NULL;

    printf("Enter number of elements:");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));

    if(NULL == ptr)
    {
        printf("Unable to allpocate memory");
        return -1;
    }

    for(iCnt = 0 ; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Digits(ptr, iSize);

    free(ptr);

    return 0;
}