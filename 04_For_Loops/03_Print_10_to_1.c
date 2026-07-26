#include<stdio.h>

int main()
{
    int iCnt = 0;

    printf("Printing numbers from 10 to 1:\n");

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d\n",iCnt);
    }

    return 0;
}