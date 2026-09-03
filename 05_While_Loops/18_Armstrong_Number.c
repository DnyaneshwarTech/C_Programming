#include<stdio.h>

int main()
{
    int Num, OriginalNum, Remainder, Sum = 0;

    printf("Enter a number : ");
    scanf("%d", &Num);

    OriginalNum = Num;

    while(Num != 0)
    {
        Remainder = Num % 10;
        Sum = Sum + (Remainder * Remainder * Remainder);
        Num = Num / 10;
    }
*
    if(OriginalNum == Sum)
    {
        printf("%d is an Armstrong Number\n", OriginalNum);
    }
    else
    {
        printf("%d is not an Armstrong Number\n", OriginalNum);
    }

    return 0;
}