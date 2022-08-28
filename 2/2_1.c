#include <stdio.h>

int main()
{
    float w, h, sum, t;
    printf("Weight : ");
    scanf("%f", &w);
    printf("Height : ");
    scanf("%f", &h);
    sum = w/(h*h);
    if (sum < 18.5)
    {
        printf("Underweight");
    }
    else if (sum >= 18.5 && sum <= 24.999999)
    {
        printf("Normal weight");
    }
    else if (sum >= 25 && sum <= 29.999999)
    {
        printf("Overweight");
    }
    else if (sum >= 30)
    {
        printf("Obesity");
    }
    else
    {
        printf("EROR!!");
    }
    return 0;
}