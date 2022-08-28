#include <stdio.h>
#include <math.h>

int main()
{
    float w, h, sum, t;
    int a = 1;
    printf("Weight : ");
    scanf("%f", &w);
    printf("Height : ");
    scanf("%f", &h);
    sum = w/(pow(h,2));
    sum = sum * 1000000;
    switch ((int)sum)
    {
        case 0 ... 18500000:
        {
            printf("Underweight");
            printf("%d", sum);
            break;
        }
        case 18500001 ... 24999999:
        {
            printf("Normal weight");
            break;
        }
        case 25000000 ... 29999999:
        {
            printf("Overweight");
            break;
        }
        case 30000000 ... 2147483647:
        {
            printf("Obesity");
            break;
        }
    }
    return 0;
}