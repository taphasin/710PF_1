#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int ra;
    printf("input : ");
    scanf("%s", s);
    ra = strlen(s);
    printf("%d\n", ra);
    while (ra > 0){
        for (int x = 0; x < ra; x++){
            printf("%c", s[x]);
        }
        printf("\n");
        ra--;
    }
    return 0;
}