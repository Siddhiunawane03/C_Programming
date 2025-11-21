#include<stdio.h>
#include<stdlib.h>


int Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0, iCount = 0;
    for(iCnt = 0 ; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt]) == iNo)
        {
            iCount++;
        }
        
    }
    return iCount;
}



int main()
{
    int iSize = 0 ,iRet = 0, iCnt = 0, iValue = 0;
    int *ptr = NULL;

    printf("Enter number of elements:");
    scanf("%d",&iSize);

    printf("Enter the number");
    scanf("%d",&iValue);

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

    iRet = Frequency(ptr, iSize , iValue);

    printf("%d", iRet);

    free(ptr);

    return 0;
}