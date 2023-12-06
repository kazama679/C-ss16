#include <stdio.h>
void copy_file(FILE *source, FILE *destination) {
    char c;
    while ((c = fgetc(source)) != EOF) {
        fputc(c, destination);
    }
}
int main() {
    FILE *file1, *file3, *file5;
    file1 = fopen("bt01.txt", "r");
    file3 = fopen("bt03.txt", "r");
    if (file1 == NULL || file3 == NULL) {
        printf("Không the mo file\n");
        return 1;
    }
    file5 = fopen("bt5.txt", "w");
    if (file5 == NULL) {
        printf("Không the mo file\n");
        return 1;
    }
    copy_file(file1, file5);
    copy_file(file3, file5);
    fclose(file1);
    fclose(file3);
    fclose(file5);
    return 0;
}

