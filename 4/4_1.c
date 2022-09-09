#include <stdio.h>

int main()
{
    int even = 0, odd = 0, sum,a[10];
    printf("input : ");
    for (int s = 0 ; s < 10 ; s++)
    {
        scanf("%d", &a[s]);
    }
    // scanf("%d", a);
    for(int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            odd = odd + a[i];
        }
        else
        {
            even = even + a[i];
        }
    }
    //printf("%d %d", odd, even);
    sum = odd - even;
    printf("%d", sum);
    return 0;
}