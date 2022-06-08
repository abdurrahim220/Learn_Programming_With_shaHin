// Write a program to convert degrees Celsius to Fahrenheit

#include<stdio.h>
int main()
{
    double celsius,fahrenheit;

    printf("Enter Celsius = ");

    scanf("%lf",&celsius);

    fahrenheit =( (celsius*9)/5)+32;

    printf("\n%.3lf Fahrenheit = %.3lf\n",celsius,fahrenheit);

    return 0;

}
