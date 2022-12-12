
// Accept N number from user and return and check whether that numbers contain 11 in it or not .

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool Check(int Arr[], int iLength)
{
    register int iCnt = 0;
    bool bFlag = false;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == 11)
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
    register int iCnt = 0;
    int iSize = 0;
    bool bRet = false;

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

    bRet = Check(ptr, iSize);

    if(bRet==true)
    {
        printf("11 is present");
    }

    else
    {
        printf("11 is not present");

    }

    free(ptr);

    return 0;
}