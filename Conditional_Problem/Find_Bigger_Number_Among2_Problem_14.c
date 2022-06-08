//Write a program that finds out which one of two inputs is bigger than the other

#include<stdio.h>
int main()
{
    int a , b;

    printf("Input Two Number = ");

    scanf("%d%d",&a,&b);

    if(a>b) printf("%d",a);

    else if(a<b) printf("%d",b);

    else printf("Both are equal");

    return 0;
}
