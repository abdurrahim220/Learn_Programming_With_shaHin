//Write a program that calculates the area of a triangle taking base and height as inputs
#include<stdio.h>
int main()
{
    float base , heiht, area;
    printf("Enter The values = ");
    scanf("%f%f",&base, &heiht);

    area = .5 * base * heiht;

    printf("The are of a Triangle = %.2f", area);
    return 0;

}
