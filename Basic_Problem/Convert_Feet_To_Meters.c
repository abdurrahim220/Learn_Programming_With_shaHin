//Write a program to convert feet to meters
#include<stdio.h>
int main()
{
    double meter,feet;

    printf("Input Feet = ");

    scanf("%lf",&feet);

    meter = feet / 3.281;

    printf("Meter = %.3lf",meter);

    return 0;
}
