#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMin = Arr[0], iMax = Arr[0];
    for(iCnt = 0 ; iCnt < iLength; iCnt++)
    {
        
        if((Arr[iCnt]) < iMin)
        {
            iMin = Arr[iCnt];
        }
        if((Arr[iCnt])> iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax-iMin;
}


int main()
{
    int iSize = 0 ,iRet = 0, iCnt = 0;
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

    iRet = Difference(ptr, iSize);

    printf("Differnce  is  %d", iRet);

    free(ptr);

    return 0;
}