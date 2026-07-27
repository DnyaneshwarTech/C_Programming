#include<stdio.h>

int main()
{   
    int iNo = 5;
    int iMult = 0;
    int iCnt = 0;

    printf("Table of %d:\n", iNo);

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        iMult = iNo * iCnt;
        printf("%d\n",iMult);
    }

    return 0;
}