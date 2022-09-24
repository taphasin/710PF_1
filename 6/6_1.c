#include <stdio.h>
int main()
{
    int ls[5], a = 0;
    printf("input num : ");
    for (int i = 0; i <= 4; i++){
        scanf("%d", &ls[i]);
    }
    a = ls[0];
    for (int c = 0; c <= 3; c++){

        if (ls[c] < ls[c+1]){
            a = ls[c+1];
        }

        else if (ls[c] > ls[c+1]){
            ls[c+1] = a;
        }
    }
    printf("%d", a); 
    return 0;
}
