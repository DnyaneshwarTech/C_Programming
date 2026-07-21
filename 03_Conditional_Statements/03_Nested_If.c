#include<stdio.h>

int main()
{
    int iAge = 0;

    printf("Enter your age : ");
    scanf("%d",&iAge);

    if(iAge >= 18)
    {
        if(iAge >= 60)
        {
            printf("You are a Senior Citizen.\n");
        }
        else
        {
            printf("You are an Adult.\n");
        }    
    }
    else
    {
        printf("You are a Minor.\n");
    }

    return 0;
}