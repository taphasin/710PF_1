#include <stdio.h>

int main()
{
    int even = 0, odd = 0, sum,a[10];
    printf("input : ");
    for (int s = 1 ; s <= 10 ; s++)
    {
        scanf("%d", &a[s]);
    }
    
    printf("Data in array : ");
    for (int p = 1; p <= 10; p++)
    {
        printf(" %d", a[p]);
    }

    for(int i = 1; i <= 10; i++)
    {
        if (a[i] % 2 == 0)
        {
            even = even + i;
        }
        else
        {
            odd = odd + i;
        }
    }
    sum = even - odd;
    printf("\nResult: ");
    printf("%d", sum);
    return 0;
}