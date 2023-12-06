#include<stdio.h>
int main(){
    FILE *file = NULL;
    char Content[100];
    file = fopen("D:Documents\\Quang\\3.txt", "r");
    fread(Content , sizeof(char), sizeof(Content),file);
    printf("%s",Content);
    fclose(file);
    return 0;
}
