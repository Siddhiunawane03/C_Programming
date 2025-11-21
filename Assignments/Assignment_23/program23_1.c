#include<stdio.h>
#include<stdlib.h>
#define true 1
#define false 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int iSize = 0 , iValue=0, iCnt = 0; 
    BOOL bret = false;
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

    bret = Check(ptr,iSize,iValue);

    if(bret == true)
    {
        printf("The number is present");
    }

    else
    {
        printf("the number is not present");
    }


    free(ptr);
    return 0;

}