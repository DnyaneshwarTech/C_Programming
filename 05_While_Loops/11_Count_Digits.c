#include<stdio.h>

int main()
{
    int Num = 0;
    int Count = 0;

    printf("Enter a number : ");
    scanf("%d", &Num);

    while(Num != 0)
    {
        Count++;
        Num = Num / 10;
    }

    printf("Total Digits = %d\n",Count);

    return 0;
}