//Write a program to find out whether an input number is odd or even.

#include<stdio.h>
int main()
{
    int num;
    printf("Input Number = ");
    scanf("%d",&num);

    if(num % 2 == 0)
    {
        printf("Even\n",num);
    }
    else
    {
        printf("Odd\n");// which is num % 2 == 1;
    }
    return 0;
}
