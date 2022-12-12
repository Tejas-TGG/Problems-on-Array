// Accept n number from user and count even number
#include <stdio.h>
#include <stdlib.h>

int DisplayEven(int Arr[], int iLength)
{
    int iCnt = 0 ,  iEvenCount=0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] % 2 == 0)
        {
            iEvenCount++;
        }
    }

    return iEvenCount;
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

    iRet=DisplayEven(ptr, iSize);
    printf("Number of even elements %d :\n",iRet);
    free(ptr);

    return 0;
}

