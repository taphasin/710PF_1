#include <stdio.h>

int main()
{
    int a;
    printf("How long : ");
    scanf("%d", &a);
    while (a > 0)
    {
        printf("*");
        a--;
    }
}