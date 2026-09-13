#include<stdio.h>

int main()
{
    int num = 0;
    int cnt = 1;
    int sum = 0;

    printf("Enter a number : ");
    scanf("%d",&num);

    while (cnt < num)
    {
        if(num % cnt == 0)
        {
            sum = sum + cnt;
        }

        cnt++;
    }

    if(sum == num)
    {
        printf("%d is a perfect number\n",num);
    }
    else
    {
        printf("%d is not a perfect number\n",num);
    }
    
    return 0;
}