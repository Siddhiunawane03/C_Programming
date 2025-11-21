#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[], int iLength)
{
    int iCnt = 0;
    int SumEven = 0, SumOdd = 0;
    for(iCnt = 0 ; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt]%2 == 0)
        {
            SumEven+=Arr[iCnt];
        }
        else
        {
            SumOdd+=Arr[iCnt];
        }
    }
    return SumEven-SumOdd;
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