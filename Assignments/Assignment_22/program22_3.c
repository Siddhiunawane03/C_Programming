#include<stdio.h>
#include<stdbool.h>

bool Check(int Arr[], int iLength)
{
    int iCnt = 0;
    bool bFlag = false;
    for(iCnt = 0 ; iCnt < iLength; iCnt++)
    {
       if(Arr[iCnt] == 11)
       {
            bFlag = true;
            break;
       }
    }
    return bFlag;
}


int main()
{
    int iSize = 0, iCnt = 0;
    bool bRet = false;
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

    bRet = Check(ptr, iSize);

    if(bRet == true)
    {
        printf(" 11 is present");
    }
    else
    {
        printf(" 11 is absent");
    }
    free(ptr);

    return 0;
}