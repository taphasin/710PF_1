#include <stdio.h>

int main()
{
    int a , b;
    printf("first number : ");
    scanf("%d", &a);
    printf("second number : ");
    scanf("%d", &b);
    printf("plus = %d\n", a + b);
    printf("minus = %d\n", a - b);
    printf("multiply = %d\n", a * b);
    printf("divide = %d", a / b);
    return 0;
}