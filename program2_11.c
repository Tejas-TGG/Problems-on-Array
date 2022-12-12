// Accept n number from user and return smallest number from that n number

#include <stdio.h>
#include <stdlib.h>

int MinNumbers(int Arr[], int iLength)
{
    int iCnt = 0 ;
    int iMin=Arr[0];


    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iMin > Arr[iCnt])
        {
            iMin=Arr[iCnt];
        }
    }
    return iMin;
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

    if(ptr==NULL)
    {
        printf("Unable to allocate memory\n");
    }

    printf("Enter the values of array :\n");

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {

        scanf("%d", &ptr[iCnt]);
    }

    iRet=MinNumbers(ptr, iSize);
    printf("Smallest number is  %d :\n",iRet);
    free(ptr);

    return 0;
}