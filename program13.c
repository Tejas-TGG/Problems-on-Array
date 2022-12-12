// Accept n number from number and return largest number from that n number

#include <stdio.h>
#include <stdlib.h>

int MaxNumbers(int Arr[], int iLength)
{
    int iCnt = 0 ;
    int iMax=Arr[0];


    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iMax < Arr[iCnt])
        {
            iMax=Arr[iCnt];
        }
    }
    return iMax;
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet=0;

    printf("Enter number of elements:\n");
    scanf("%d", &iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the values of array :\n");

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {

        scanf("%d", &ptr[iCnt]);
    }

    iRet=MaxNumbers(ptr, iSize);
    printf("Max element is  %d :\n",iRet);
    free(ptr);

    return 0;
}