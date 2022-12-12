// Accept N number from user and accept one another number as No 
// return index of first occurance of that No......

#include <stdio.h>
#include <stdlib.h>

int FistOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iRes = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == iNo)
        {
            break;
        }
    }

    if (iCnt == iLength)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}

int main()
{
    int *ptr = NULL;
    int iSize = 0;
    int iCnt = 0, iValue = 0;
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

    printf("Enter another element :\n");
    scanf("%d", &iValue);

    iRet = FistOcc(ptr, iSize, iValue);

    if (iRet == -1)
    {
        printf("There is no such number");
    }

    else
    {
        printf("First occurance of No is %d:\n", iRet);
    }

    free(ptr);

    return 0;
}