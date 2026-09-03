#include<stdio.h>

int main()
{
    int Num, OriginalNum, Remainder, ReversedNum = 0;

    printf("Enter a number : ");
    scanf("%d",&Num);

    OriginalNum = Num;

    while(Num != 0)
    {
        Remainder = Num % 10;
        ReversedNum = ReversedNum * 10 + Remainder;
        Num = Num / 10;
    }

    if(OriginalNum == ReversedNum)
    {
        printf("%d is a Pallindrome Number\n", OriginalNum);
    }
    else
    {
        printf("%d is not a Pallindrome Number\n", OriginalNum);
    }

    return 0;
}