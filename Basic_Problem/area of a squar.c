//Write a program that calculates the area of a square taking the length of the side as input
#include<stdio.h>
int main()
{
    float side;
    printf("Input the length of the side = ");
    scanf("%f",&side);

    printf("The area of a square = %.2f\n",(side * side));
    return 0;
}
