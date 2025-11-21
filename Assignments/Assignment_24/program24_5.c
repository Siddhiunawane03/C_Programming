#include<stdio.h>
#include<stdlib.h>
int DigitsSum(int Arr[], int iLength)
{
    
    int iCnt = 0;
    for(iCnt = 0 ; iCnt < iLength; iCnt++)
    {
       int iDigitSum = 0;
       int iNo = Arr[iCnt];
       while (iNo != 0)
       {
            iDigitSum += (iNo%10);
            iNo = iNo/10;

       }
        
       printf("%d\t",iDigitSum);
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

    DigitsSum(ptr, iSize);

    free(ptr);

    return 0;
}