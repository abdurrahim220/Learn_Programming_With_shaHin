//Write a program that takes two integers as inputs and adds, subtraction, multiplication, and division them
#include<stdio.h>
int main()
{
    int a,b;
    printf("Input Two number = ");
    scanf("%d%d",&a, &b);

    printf("ADD = %d\n",(a+b));
    printf("Subtraction = %d\n",(a - b));
    printf("Multiplication = %d\n",(a * b));
    printf("Division = %.2f\n",(float) a / b);
    return 0;
}
