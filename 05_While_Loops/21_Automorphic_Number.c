#include<stdio.h>

int main()
{
    int num, squre, temp, digits = 0;

    int power = 1;

    printf("Enter a number : ");
    scanf("%d",&num);

    squre = num * num;

    temp = num;

    while (temp > 0)
    {
        digits++;
        temp = temp / 10;
    }

    while(digits > 0)
    {
        power = power * 10;
        digits--;
    }

    if(squre % power == num)
    {
        printf("%d is an Automorphic numer\n",num);
    }
    else
    {
        printf("%d is not an Automorphic number\n",num);
    }
    
    return 0;
}