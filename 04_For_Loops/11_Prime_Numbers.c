#include<stdio.h>

int main()
{
    int iNo = 0;
    int iCnt = 0;
    int iCount = 0;

    printf("Enter number : ");
    scanf("%d", &iNo);

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iCount++;
        }
    }

    if(iCount == 2)
    {
        printf("%d is a prime number\n", iNo);
    }
    else
    {
        printf("%d is not a prime number\n", iNo);
    }

    return 0;
}