// Accept n number from user and take another number from user  
// and comapre with n number
// and return index of that array in first occurance.


#include <stdio.h>
#include <stdlib.h>

int SearchFirstOccurance(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (iNo == Arr[iCnt])
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

    iRet = SearchFirstOccurance(ptr, iSize, iValue);
    if (iRet == -1)
    {
        printf("There is no such element in array :\n");
    }

    else
    {
        printf("Element first occured at : %d\n",iRet);
    }
    free(ptr);

    return 0;
}