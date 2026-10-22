#include <stdio.h>

int main()
{
    int iNo = 0;
    int iCnt = 0;

    printf("Enter number : ");
    scanf("%d", &iNo);

    if(iNo <= 0)
    {
        printf("Invalid input.\n");
        return 1;
    }

    iCnt = iNo;

    printf("Factors in descending order : ");

    while(iCnt >= 1)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d ", iCnt);
        }

        iCnt--;
    }

    printf("\n");

    return 0;
}