#include <stdio.h>

int main()
{
    int ls[5], a;
    printf("input num : ");
    for (int i = 0; i <= 4; i++){
        scanf("%d", &ls[i]);
    }
    a = ls[0];
    for (int c = 0; c <= 4; c++){
        if (a < ls[c]){
            a = ls[c];
        }
    }
    printf("%d", a);
    return 0;
}