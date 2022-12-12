
//Accept N number from user and accept one another number as No from user , and return frequency of no from it.


#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[], int iLength , int iNo)
{
    register int iCnt = 0;
    int iCount=0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]  == iNo)
        {
            iCount++;
        }

    }

    return iCount;
    
}

int main()
{
    int *ptr = NULL;
    register int iCnt = 0;
    int iSize = 0;
    int iRet = 0;
    int iValue=0;

    printf("Enter size of array:\n");
    scanf("%d", &iSize);

    ptr = ((int *)malloc(iSize * sizeof(int)));

    if(ptr==NULL)
    {
        printf("unable to allocate memory : ");
        return -1;
    }

    printf("Enter the Elements:\n");

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("Enter another number :\n");
    scanf("%d",&iValue);

    iRet = Frequency(ptr, iSize , iValue);

    printf("Frequency of No is :\n %d ",iRet);

    free(ptr);

    return 0;
}