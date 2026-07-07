#include<stdio.h>

int main()
{
       int No1 = 0;
       int No2 = 0;

       printf("Enter first number : ");
       scanf("%d",&No1);

       printf("Enter second number : ");
       scanf("%d",&No2);

       printf("\nRelational Operators Result : \n");
       printf("(1 = True, 0 = False)\n\n");

       printf("%d > %d :  %d\n",No1,No2, No1 > No2);
       printf("%d < %d :  %d\n",No1,No2, No1 < No2);
       printf("%d >= %d :  %d\n",No1,No2, No1 >= No2);
       printf("%d <= %d :  %d\n",No1,No2, No1 <= No2);
       printf("%d == %d :  %d\n",No1,No2, No1 == No2);
       printf("%d != %d :  %d\n",No1,No2, No1 != No2);

       return 0;
}