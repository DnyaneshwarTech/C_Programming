#include<stdio.h>

int main()
{
    int iCnt = 0;

    printf("Printing odd numbers from 1 to 100:\n");

    for(iCnt = 1; iCnt <= 100; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            printf("%d\n", iCnt);
        }
    }

    return 0;
}