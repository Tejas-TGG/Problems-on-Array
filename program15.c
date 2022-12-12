// Accept n number from user , enter another number and comapre it with Arr and count its number 
//Input = 
//Enter element= 44,44,44,44
//Enter another number =44
//output = Frequency is 4


#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (iNo == Arr[iCnt])
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;
    int iValue = 0;

    printf("Enter number of elements:\n");
    scanf("%d", &iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the values of array :\n");

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {

        scanf("%d", &ptr[iCnt]);
    }

    printf("Enter another number :\n");
    scanf("%d", &iValue);

    iRet = Frequency(ptr, iSize, iValue);
    printf("Frequency is %d :\n", iRet);
    free(ptr);

    return 0;
}