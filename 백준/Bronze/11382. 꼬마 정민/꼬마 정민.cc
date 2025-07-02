#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    long long a, b, c, sum;
    scanf("%ld %ld %ld", &a, &b, &c);
    sum = a + b + c;
    printf("%ld", sum);

    return 0;
}