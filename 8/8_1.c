#include<stdio.h>
#include<string.h>

int main()
{
    char name[50];
    FILE* fp;
    printf("intput :");
    while(name[0] != '.'){
        scanf("%s", name);
        fp = fopen("c:\\temp\\data.txt", "a");
        fprintf(fp, "%s\n", name);
        fclose(fp);
    }
    return 0;
}