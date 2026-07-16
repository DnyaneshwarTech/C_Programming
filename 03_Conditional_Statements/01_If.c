#include<stdio.h>

int main()
{
    int iNo = 0;

    printf("Enter a number : ");
    scanf("%d",&iNo);

    if(iNo > 0)
    {
        printf("%d is a Positive Number.\n", iNo);
    }

    return 0;
}