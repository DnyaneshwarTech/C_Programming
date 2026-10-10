#include<stdio.h>

int main()
{
    int iCnt = 1;
    int iTerms = 0;
    int iFirst = 0;
    int iSecond = 1;
    int iNext = 0;

    printf("Enter number of terms : ");
    scanf("%d", &iTerms);

    if(iTerms <= 0)
    {
        printf("Enter a positive number. \n");
        return  0;
    }

    while(iCnt <= iTerms)
    {
        printf("%d ", iFirst);

        iNext = iFirst + iSecond;
        iFirst = iSecond;
        iSecond = iNext;

        iCnt++;
    }

    printf("\n");

    return 0;
}