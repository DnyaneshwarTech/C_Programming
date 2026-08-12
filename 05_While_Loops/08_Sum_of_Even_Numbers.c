#include<stdio.h>

int main()
{
    int iCnt = 2;
    int iSum = 0;

    while(iCnt <= 10)
    {
        iSum = iSum + iCnt;
        iCnt = iCnt + 2;
    }

    printf("Sum of even numbers = %d\n", iSum);

    return 0;
}