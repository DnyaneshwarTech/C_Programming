#include<stdio.h>

int main()
{
    int iNum = 0;
    int iDigit = 0;
    int iMin = 9;

    printf("Enter the number : ");
    scanf("%d",&iNum);

    while(iNum != 0)
    {
        iDigit = iNum % 10;

        if(iDigit < iMin)
        {
            iMin = iDigit;
        }

        iNum = iNum / 10;
    }

    printf("Smallest digit : %d\n",iMin);

    return 0;
}