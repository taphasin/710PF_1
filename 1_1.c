#include <stdio.h>

int main()
{
    int a[2];
    printf("first number : ");
    scanf("%d", &a[0]);
    printf("second number : ");
    scanf("%d", &a[1]);
    printf("plus = %d\n", a[0] + a[1]);
    printf("minus = %d\n", a[0] - a[1]);
    printf("multiply = %d\n", a[0] * a[1]);
    printf("divide = %d", a[0] / a[1]);
    return 0;
}