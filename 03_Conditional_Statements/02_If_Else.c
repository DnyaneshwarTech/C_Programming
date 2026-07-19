#include<stdio.h>

int main()
{
    int Marks;

    printf("Enter your marks : ");
    scanf("%d",&Marks);

    if(Marks >= 35)
    {
        printf("Congratulations! You are Pass.\n");
    }
    else
    {
        printf("Sorry! You are Fail.\n");
    }
   
    return 0;
}