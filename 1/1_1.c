#include <stdio.h>

int main()
{
    int a[3];
    for (int i = 1; i <= 2; i++){
    	printf("enter number %d : ", i);
    	scanf("%d", &a[i]);
	}
    printf("plus = %d\n", a[1] + a[2]);
    printf("minus = %d\n", a[1] - a[2]);
    printf("multiply = %d\n", a[1] * a[2]);
    printf("divide = %d", a[1] / a[2]);
    return 0;
}
