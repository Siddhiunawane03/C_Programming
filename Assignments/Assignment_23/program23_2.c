#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            return iCnt;
        }
    }
    return -1;
}

int main()
{
    int iSize = 0 , iValue=0, iCnt = 0,iRet = 0;
    int * ptr = NULL;
    printf("Enter number of elements:");
    scanf("%d",&iSize);

    printf("Enter the number to search:");
    scanf("%d",&iValue);

    ptr = (int*)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter the elemnts to be entered inside an array:");

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = FirstOcc(ptr,iSize,iValue);

    if(iRet == -1)
    {
        printf("There is no such number");
    }

    else
    {
        printf("First occurence of the number is at %dth index",iRet);
    }


    free(ptr);
    return 0;

}