#include<stdio.h>

int main()
{
    int iValue = 0;
    int iSum = 0;
    int iCnt = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    for(iCnt = 1; iCnt <= iValue; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            iSum = iSum + iCnt; 
        }
    }

    printf("Sum of odd numbers = %d\n",iSum);

    return 0;
}