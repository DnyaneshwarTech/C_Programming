#include<stdio.h>

int main()
{
    int iNo;
    int iCnt = 0;

    printf("Enter number : ");
    scanf("%d", &iNo);

    printf("Factors of %d are : ",iNo);

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            printf("\n%d", iCnt);
        }
    }

    printf("\n");

    return 0;
}