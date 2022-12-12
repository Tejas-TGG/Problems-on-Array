// Display addition of digits of each elements in array list


#include <stdio.h>
#include <stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iCnt = 0;
    int iDigit = 0;
    int iSum = 0;


    printf("Addition of digits of each element in array is \n");

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        int iSum = 0;                                        // iSum again have to initialize to 0  to give seperate array's digit sum.

        while (Arr[iCnt] > 0)
        {
            iDigit = Arr[iCnt] % 10;

            iSum = iSum + iDigit;

            Arr[iCnt] = Arr[iCnt] / 10;
        }

        printf("%d\n", iSum);
    }
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter number of elements:\n");
    scanf("%d", &iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if (ptr == NULL)
    {
        printf("Unable to allocate memory\n");
    }

    printf("Enter the values of array :\n");

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {

        scanf("%d", &ptr[iCnt]);
    }

    Digits(ptr, iSize);
    free(ptr);

    return 0;
}