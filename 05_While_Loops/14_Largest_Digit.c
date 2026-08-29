#include<stdio.h>

int main()
{
    int iNum, iDigit, iLargest = 0;

    printf("Enter number : ");
    scanf("%d",&iNum);

    while(iNum != 0)
    {
        iDigit = iNum % 10;

        if(iDigit > iLargest)
        {
            iLargest = iDigit;
        }

        iNum = iNum / 10;
    }

    printf("Largest digit = %d\n",iLargest);

    return 0;
}