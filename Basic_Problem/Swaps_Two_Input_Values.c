#include<stdio.h>
int main()
{
    double num1,num2,temp;

    printf("Input first Number = ");

    scanf("%lf",&num1);

    printf("Input Second Number = ");

    scanf("%lf",&num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swaping number one is = %.2lf\n",num1);

    printf("After swaping number two is = %.2lf",num2);

    return 0;

}
