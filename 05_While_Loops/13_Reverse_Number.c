#include<stdio.h>

int main()
{
    int Num = 0;
    int Digit = 0;
    int Reverse = 0;

    printf("Enter a number : ");
    scanf("%d", &Num);

    while(Num != 0)
    {
        Digit = Num % 10;
        Reverse = Reverse * 10 + Digit;
        Num = Num / 10;
    }

    printf("Reverse number = %d\n", Reverse);

    return 0;
}