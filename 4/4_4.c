#include <stdio.h>

int main()
{
    int a[10], nue, oe, sum, odd, even;
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
    

    odd = 0;
    even = 0;
    for(int i = 1; i <= 10; i++)
    {
        oe = 1;
        for (int c = 1; c <= a[i]; c++) {
            oe = 1 - oe;
        }
  
        if (oe == 0) {
            odd = odd + i;
        }
  
        else {
            even = even + i;
        }
    }
    sum = even - odd;
    printf("\nResult: ");
    printf("%d", sum);
  
    return 0;
}