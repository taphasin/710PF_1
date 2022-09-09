#include <stdio.h>

int main()
{
    int even = 0, odd = 0, sum,a[10];
    printf("input : ");
    for (int s = 0 ; s < 10 ; s++)
    {
        scanf("%d", &a[s]);
    }
    sum = (a[0] + a[2] + a[4] + a[6] + a[8]) - (a[1] + a[3] + a[5] + a[7] + a[9]);
    printf("%d", sum); 
    return 0;
}