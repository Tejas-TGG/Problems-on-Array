// Accept N number from user and return product of all odd elements.......


#include <stdio.h>
#include <stdlib.h>

int Product(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMult = 1;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] % 2 != 0)
        {
            iMult=iMult*Arr[iCnt];
        }
    }

    return iMult;
}

int main()
{
    int *ptr = NULL;
    int iSize = 0;
    int iCnt = 0;
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

    iRet = Product(ptr, iSize);

    printf("Product of odd element is :% d \n",iRet);

    free(ptr);

    return 0;
}