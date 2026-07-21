#include<stdio.h>

int main()
{
    int Marks = 0;

    printf("Enter your marks : ");
    scanf("%d",&Marks);

    if(Marks >= 75)
    {
        printf("Distinction\n");
    }
    else if(Marks >= 60)
    {
        printf("First Class\n");
    }
    else if(Marks >= 50)
    {
        printf("Second Class\n");
    }
    else if(Marks >= 35)
    {
        printf("Pass\n");
    }
    else
    {
        printf("Fail\n");
    }

    return 0;
}