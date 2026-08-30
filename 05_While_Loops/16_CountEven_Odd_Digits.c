#include<stdio.h>

int main()
{
    int iNum = 0; 
    int iDigit = 0;
    int iEven = 0; 
    int iOdd = 0;

    printf("Enter number : ");
    scanf("%d",&iNum);

    while(iNum != 0)
    {
        iDigit = iNum % 10;

        if((iDigit % 2) == 0)
        {
            iEven++;
        }
        else
        {
            iOdd++;
        }

        iNum = iNum / 10;
    }

    printf("Even digits : %d\n", iEven);
    printf("Odd digits : %d\n", iOdd);

    return 0;
}