#include<stdio.h>
#include<string.h>

int main()
{
    int n = 0;
    char name[50], inp[50];
    FILE* fp;
    struct st{
        char name[50];
    };
    struct st p[1024];

    printf("intput :");

    for(int i = 1; inp[0] != '.'; i++){
        scanf("%s", inp);
        strcpy(p[i].name, inp);
        n++;
    }

    for(int j = 1; j <= n; j++){
        fp = fopen("c:\\temp\\data.txt", "a");
        fprintf(fp, "%s\n", p[j].name);
        fclose(fp);
    }
    return 0;
}