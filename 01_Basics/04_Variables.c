#include<stdio.h>

int main()
{
    // Variable Declaration

    char grade;
    int age;
    float marks;
    double salary;
   
    // Variable Initialization

    grade = 'A';
    age = 25;
    marks = 99.89f;
    salary = 78.67890;

    // Print Values

    printf("Grade = %c\n",grade);
    printf("Age = %d\n",age);
    printf("Marks = %.2f\n",marks);
    printf("Salary = %.4lf\n",salary);

    return 0;
}