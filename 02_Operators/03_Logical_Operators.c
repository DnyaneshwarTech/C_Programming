#include<stdio.h>

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;

    printf("Enter first number : ");
    scanf("%d",&iNo1);

    printf("Enter second number : ");
    scanf("%d",&iNo2);

    printf("\nLogical Operators Result : \n");
    printf("(1 = True, 0 = False)\n");

    printf("\nLogical AND (&&) : %d",(iNo1 > 0) && (iNo2 > 0));
    printf("\nLogical OR (||) : %d",(iNo1 > 0) || (iNo2 > 0));
    printf("\nLogical NOT (!) : %d", !(iNo1 > 0));

    printf("\n");

    return 0;
}