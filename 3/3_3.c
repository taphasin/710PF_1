#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a;
    int x = 1;
    printf("How long : ");
    scanf("%d", &a);
    while (x == 1)
    {
        if (a != 0){
            printf("*");
            a--;
        }
        else{
            x = 0;
        }
    }
}