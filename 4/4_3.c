#include <stdio.h>

int main()
{
    int even = 0, odd = 0;
    int a, b, c, d, e, f, g, h, i , j;
    printf("input : ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    scanf("%d", &f);
    scanf("%d", &g);
    scanf("%d", &h);
    scanf("%d", &i);
    scanf("%d", &j); 
    odd = a + c + e + g + i;
    even = b + d + f + h + j;
    printf("%d",odd - even);
    return 0;
}