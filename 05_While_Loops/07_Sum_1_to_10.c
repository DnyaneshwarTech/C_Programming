#include<stdio.h>

int main()
{
    int iCnt = 1;
    int iSum = 0;

    while(iCnt <= 10)
    {
        iSum = iSum + iCnt;
        iCnt++;
    }

    printf("Sum is = %d\n", iSum);

    return 0;
}