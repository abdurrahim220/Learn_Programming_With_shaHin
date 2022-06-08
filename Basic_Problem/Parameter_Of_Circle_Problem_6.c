//Write a program that calculates the perimeter of a circle taking its radius as input.
#include<stdio.h>
int main()
{
    double radious, PI=3.1416, perimeter;

    printf("Input It's Radious = ");

    scanf("%lf",&radious);

    perimeter = 2 * PI * radious;

    printf("The Perimeter = %.3lf\n",perimeter);

    return 0;
}
