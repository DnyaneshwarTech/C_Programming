#include<stdio.h>

int main()
{
    int Num = 0;
    int Digit = 0;
    int Sum = 0;

    printf("Enter a number : ");
    scanf("%d", &Num);
    
    while(Num != 0)
    {
        Digit = Num % 10;
        Sum = Sum + Digit;
        Num = Num / 10;
    }

    printf("Sum of Digits = %d\n",Sum);

    return 0;
}