//Program to output the sum and diff of two numbers
#include<stdio.h>

int main()
{
    int a, b, sum, diff;
    printf("enter the two numbers: ");
    scanf("%d%d", &a, &b);
    sum=a+b;
    diff=a-b;
    printf("the sum of two numbers entered %d and %d equals to %d\n", a, b, sum);
    printf("the difference between two numbers %d and %d isis:", a, b, diff);
    return 0;
}
