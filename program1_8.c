//Accept N number from user and return difference between summation of even element
//and summation of odd elements.


#include <stdio.h>
#include <stdlib.h>

int SumDifference(int Arr[], int iLength)
{
    register int iCnt = 0;
    int iSumEven = 0, iSumOdd = 0, iSumEvenOdd = 0;
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] % 2 == 0)
        {
            iSumEven = iSumEven + Arr[iCnt];
        }

        if (Arr[iCnt] % 2 != 0)
        {
            iSumOdd = iSumOdd + Arr[iCnt];
        }

        iSumEvenOdd = iSumEven - iSumOdd;
    }


    return iSumEvenOdd;
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

    if(ptr==NULL)
    {
        printf("unable to allocate memory : ");
        return -1;
    }

    printf("Enter the Elements:\n");

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    iRet = SumDifference(ptr, iSize);

    printf("Difference between Even and odd element is :\n %d ",iRet);

    free(ptr);

    return 0;
}