#include<stdio.h>

int main()
{
    int iNo = 0;
    int iCnt = 1;
    int iFact = 1;

    printf("Enter a number : ");
    scanf("%d", &iNo);

    while(iCnt <= iNo)
    {
        iFact = iFact * iCnt;
        iCnt++;
    }

    printf("Factorial = %d\n",iFact);

    return 0;
}