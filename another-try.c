//Program to output the sum of two numbers
#include<stdio.h>

int main()
{
    int a, b, sum;
    printf("enter the two numbers: ");
    scanf("%d%d", &a, &b);
    sum=a+b;
    printf("the sum of two numbers entered %d and %d equals to %d\n", a, b, sum);
    return 0;
}