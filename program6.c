#include <stdio.h>

void Display(int ptr[])
{   
    int iCnt = 0;
     printf("Elements of array are :\n");

    for (iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\n", ptr[iCnt]);                 //ptr[iCnt]=*(ptr+iCnt)
        
    }

}
int main()
{  
    auto int Arr[5];
    register int iCnt = 0;
    printf("Enter elements :\n");

    for (iCnt = 0; iCnt < 5; iCnt++)
    {
        scanf("%d", &Arr[iCnt]);
    }

    Display(Arr);                   // Display(100)

    return 0;
}


// Arr[2]=*(arr+2);                      same mean
// Arr[2]=*(2+arr);
// Arr[2]=2[arr];

