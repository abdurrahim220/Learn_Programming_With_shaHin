#include<stdio.h>
int main()
{
    int num, reverse = 0, reminder = 0;
    printf("Input Number = ");
    scanf("%d",&num);

    while(num != 0)
    {
        reminder = num % 10;
        reverse = reverse * 10 + reminder ;
        num = num / 10;
    }

    printf("After Reversing = %d",reverse);

    return 0;
}
