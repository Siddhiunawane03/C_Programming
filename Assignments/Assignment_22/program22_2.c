#include<stdio.h>
int Frequency(int Arr[], int iLength)
{
    int iCnt = 0, iCountEven = 0, iCountOdd;
    for(iCnt = 0 ; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt])%2 == 0)
        {
            iCountEven++;
        }
        else
        {
            iCountOdd++;
        }
    }
    return iCountEven;
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

    iRet = Frequency(ptr, iSize);

    printf("Result is %d", iRet);

    free(ptr);

    return 0;
}