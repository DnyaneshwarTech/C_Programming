#include<stdio.h>

int main()
{
    int num, i = 2, count = 0;

    printf("Enter a number : ");
    scanf("%d",&num);

    while(i <= num / 2)
    {
        if(num % i == 0)
        {
            count++;
            break;
        }
        
        i++;
    }

    if(num > 1 && count == 0)
    {
        printf("%d is a Prime Number.\n", num);
    }
    else
    {
        printf("%d is not a Prime Number.\n", num);
    }

    return 0;
}