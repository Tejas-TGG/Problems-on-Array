// Accept N number from user and accept one another number as No 
// check whether No is present or not......


#include <stdio.h>
#include<stdlib.h>
#include <stdbool.h>

bool Check(int arr[], int iLength, int iNo)
{
    int iCnt = 0;
    bool bFlag = false;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (arr[iCnt] == iNo)
        {
            bFlag = true;
            break;
        }
        else
        {
            bFlag = false;
        }
    }

    return bFlag;
}

int main()
{
    int *ptr = NULL;
    int iSize = 0;
    int iCnt = 0, iValue = 0;
    bool Bret = false;

    printf("Enter size of element :\n");
    scanf("%d", &iSize);

    ptr = ((int*)malloc(iSize*sizeof(int)));

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

    Bret = Check(ptr, iSize, iValue);

    if (Bret == true)
    {
        printf("Number is present");
    }

    else
    {
        printf("Number is not present");
    }

    free(ptr);

    return 0;
}