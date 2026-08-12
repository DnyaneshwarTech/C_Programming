#include<stdio.h>

int main()
{
    int iCnt = 1;
    int iNum = 0;

    printf("Enter a number : ");
    scanf("%d", &iNum);

    while(iCnt <= 10)
    {
        printf("%d\n",iNum * iCnt);
        iCnt++;
    }

    return 0;
}