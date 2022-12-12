// Accept n number from user and take another number from user  and comapre with n number
// check whether it is present or not

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool Search(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (iNo == Arr[iCnt])
        {
            break;
        }
    }

    if (iCnt == iLength)
    {
        return false;
    }

    else
    {
        return true;
    }

}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    bool BRet = false;
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

    BRet = Search(ptr, iSize, iValue);
    if (BRet == 1)
    {
        printf("%d is present in array :\n", iValue);
    }

    else
    {
        printf("%d is not present in array :\n", iValue);
    }

    free(ptr);

    return 0;
}