
// Accept N number from user and return difference between frequency of even numbers and odd numbers .

#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[], int iLength)
{
    register int iCnt = 0;
    int iCount = 0, iCounter = 0;
    int iDiff = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] % 2 == 0)
        {
            iCount++;
        }

        if (Arr[iCnt] % 2 != 0)
        {
            iCounter++;
        }

        iDiff = iCount - iCounter;
    }

    return iDiff;
}

int main()
{
    int *ptr = NULL;
    register int iCnt = 0;
    int iSize = 0;
    int iRet = 0;

    printf("Enter size of array:\n");
    scanf("%d", &iSize);

    ptr = ((int *)malloc(iSize * sizeof(int)));

    if (ptr == NULL)
    {
        printf("unable to allocate memory : ");
        return -1;
    }

    printf("Enter the Elements:\n");

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    iRet = Frequency(ptr, iSize);

    printf("Difference is :\n %d ", iRet);

    free(ptr);

    return 0;
}