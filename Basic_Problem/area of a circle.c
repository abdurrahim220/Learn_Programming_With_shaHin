//Write a program that calculates the area of a circle taking its radius as input.
#include<stdio.h>
int main()
{
    float radious, PI, area;
    printf("Enter it's radious = ");
    scanf("%f",&radious);
    PI=3.1416;
    area = PI * radious * radious;
    printf("Area of the Circle = %.2f\n", area);
    return 0;

}
