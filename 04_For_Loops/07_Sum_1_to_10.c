#include<stdio.h>

int main()
{
    int iNo = 10;
    int iSum = 0;
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    printf("Sum of numbers from 1 to %d is : %d\n",iNo,iSum); 

    return 0;
}