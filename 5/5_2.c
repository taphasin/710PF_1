#include <stdio.h>

int fac(int c)
{
    int b = c;
    for (int i = 1; i < c; i++){
        b = b * (c - i);
    }
    return b;
}


int main()
{
    int a, result;
    printf("input num : ");
    scanf("%d", &a);
    if (a < 0)
    {
        printf("negative alert");
        return 0;
    }
    result = fac(a);
    printf("%d", result);
    return 0;
}