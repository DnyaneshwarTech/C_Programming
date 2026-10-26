
#include <stdio.h>

int CountFactors(int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    if(iNo <= 0)
    {
        return 0;
    }

    iCnt = 1;

    while(iCnt <= iNo)
    {
        if(iNo % iCnt == 0)
        {
            iCount++;
        }

        iCnt++;
    }

    return iCount;
}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iNo);

    iRet = CountFactors(iNo);

    if(iNo <= 0)
    {
        printf("Invalid input.\n");
    }
    else
    {
        printf("Total factors: %d\n", iRet);
    }

    return 0;
}
