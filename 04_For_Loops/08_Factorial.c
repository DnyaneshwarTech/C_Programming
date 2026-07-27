#include<stdio.h>

int main()
{
    int iNo = 5;
    int iFact = 1;
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    printf("Factorial of %d is : %d\n",iNo, iFact);

    return 0;
}