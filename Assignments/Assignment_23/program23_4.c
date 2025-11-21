#include<stdio.h>
#include<stdlib.h>

int Range(int Arr[], int iLength, int iStart , int iEnd)
{
    int iCnt = 0;
    for(iCnt = iLength-1; iCnt >= 0 ; iCnt--)
    {
        if(iStart <= Arr[iCnt] && Arr[iCnt] <= iEnd)
        {
            printf("%d ",Arr[iCnt]);
        }
    }
    return -1;
}

int main()
{
    int iSize = 0 , iValue1=0, iValue2 = 0 ,iCnt = 0,iRet = 0;
    int * ptr = NULL;
    printf("Enter number of elements:");
    scanf("%d",&iSize);

    printf("Enter the starting point:");
    scanf("%d",&iValue1);

    printf("Enter the Ending point:");
    scanf("%d",&iValue2);


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

    iRet = Range(ptr,iSize,iValue1,iValue2);

    free(ptr);
    return 0;

}