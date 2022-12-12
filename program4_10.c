
///////////////////////////////////////////////////////////////////////////////////
//
// Accept N number from user and accept range ,Display all elements from that range
//
// input :       N :      6
//            start:      60
//            End  :      90
//            Elements  : 85    66     3    76      93     88

// Output               : 66        76          88
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void Range(int Arr[], int iLength, int iNo1, int iNo2)
{
    int iCnt = 0;
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] > iNo1 && Arr[iCnt] < iNo2)
        {

            printf("%d \n", Arr[iCnt]);
        }
    }
}

int main()
{
    int *ptr = NULL;
    int iSize = 0;
    int iCnt = 0, iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter size of element :\n");
    scanf("%d", &iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if (ptr == NULL)
    {
        printf("unable to allocate memory.");
        return -1;
    }

    printf("Enter the elememts :\n");

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("Enter starting point  :\n");
    scanf("%d", &iValue1);

    printf("Enter Ending point  :\n");
    scanf("%d", &iValue2);

    Range(ptr, iSize, iValue1, iValue2);

    free(ptr);

    return 0;
}