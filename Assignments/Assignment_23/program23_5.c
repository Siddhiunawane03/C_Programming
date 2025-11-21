#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
    int iCnt = 0, iProduct = 1;
    for(iCnt = 0 ; iCnt<iLength ; iCnt++)
    {
        if((Arr[iCnt]) % 2 != 0)
        {
            iProduct = iProduct * Arr[iCnt];
        }
    }
    return iProduct;
}

int main()
{
    int iSize = 0 , iCnt = 0,iRet = 0;
    int * ptr = NULL;
    printf("Enter number of elements:");
    scanf("%d",&iSize);

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

    iRet = Product(ptr,iSize);

    printf("Product is: %d",iRet);


    free(ptr);
    return 0;

}