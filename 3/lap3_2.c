#include <stdio.h>

int main()
{
    int a;
    printf("How long : ");
    scanf("%d", &a);
    for(int i = 1;a >= i;i++)
    {
        printf("*");
    }
    return 0;
}