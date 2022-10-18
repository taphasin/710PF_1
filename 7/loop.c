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

    for (int x = ra; x > 0; x--){
        printf("%.*s", x, s);
        printf("\n");
    }
    return 0;
}