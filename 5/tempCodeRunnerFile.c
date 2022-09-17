#include <stdio.h>

void fac(int c)
{
    int b = c;
    for (int i = 1; i < c; i++){
        b = b * (c - i);
    }
    printf("factorial is : %d", b);
}


int main()
{
    int a;
    printf("input num : ");
    scanf("%d", &a);
    if (a < 0)
    {
        printf("negative alert");
        return 0;
    }
    fac(a);
    return 0;
}