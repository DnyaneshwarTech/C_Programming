#include<stdio.h>

int main()
{
    int num, temp, digit;
    int fact, sum = 0;
    int cnt;

    printf("Enter a number : ");
    scanf("%d", &num);

    temp = num;

    while(temp > 0)
    {
        digit = temp % 10;

        fact = 1;
        cnt = 1;

        while (cnt <= digit)
        {
            fact = fact * cnt;
            cnt++;
        }

        sum = sum + fact;

        temp = temp / 10;
    }

    if(sum == num)
    {
        printf("%d is a Strong number\n",num);
    }
    else
    {
        printf("%d is not a Strong number\n",num);
    }

    return 0;
}