#include <stdio.h>

int main()
{
    int even = 0, odd = 0, sum,a[10];
    int w = 1;
    printf("input : ");
    while (w <= 10)
    {
        scanf("%d", &a[w]);
        w++;
    }
    printf("Data in array: ");
    w = 1;

    while (w <= 10)
    {
        printf(" %d", a[w]);
        w++;
    }
    w = 1;

    while(w <= 10)
    {
        if (a[w] % 2 == 0)
        {
            even = even + w;
        }
        else
        {
            odd = odd + w;
        }
        w++;
    }
    sum = odd - even;
    printf("\nResult: %d", sum);

}