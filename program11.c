// Accept n number from user and and make sum of it.
//input=1,2,3,4
//output = sum is 10


#include <stdio.h>
#include <stdlib.h>

int SumNumbers(int Arr[], int iLength)
{
    int iCnt = 0 ,  iSum=0;
   
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
            iSum=iSum+Arr[iCnt];
    }

    return iSum;
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

    iRet=SumNumbers(ptr, iSize);
    printf("Sum of elements is %d :\n",iRet);
    free(ptr);

    return 0;
}