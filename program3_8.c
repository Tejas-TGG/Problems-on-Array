//Accept N number from user and display all such elements which are Even and divisible by 5.


#include <stdio.h>
#include <stdlib.h>

void DisplayEven(int Arr[], int iLength)
{
    register int iCnt = 0;
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] % 5 == 0 && Arr[iCnt] % 2 == 0)
        {
            printf("Even Elements which are divisible by 5 is :%d\n ", Arr[iCnt]);
        }
    }
}

int main()
{
    int *ptr = NULL;
    register int iCnt = 0;
    int iSize = 0;

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

    DisplayEven(ptr, iSize);

    free(ptr);

    return 0;
}