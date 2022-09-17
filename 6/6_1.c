#include <stdio.h>

int highest(int ls[]);

int main()
{
    int ls[5], a;
    printf("input num : ");
    for (int i = 0; i <= 4; i++){
        scanf("%d", &ls[i]);
    }

    for (int c = 0; c <= 4; c++){
        if (ls[c+1] > ls[c] && ls[c+1] != '\0'){
            a = ls[c+1];
        }
    }
    printf("%d", a);
    return 0;
}

int highest(int ls[]){
    
}
