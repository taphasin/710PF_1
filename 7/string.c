#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int ra = 0;
    printf("input : ");
    scanf("%s", &s);
    for (int i = 0; s[i] != '\0'; i++){
        ra++;
    }
    while (ra > 0){
        for (int x = 0; x < ra; x++){
            printf("%c", s[x]);
        }
        printf("\n");
        ra--;
    }
    return 0;
}