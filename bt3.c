#include <stdio.h>
int main() {
    FILE *file;
    int num_lines;
    char line[100];
    file = fopen("bt3.txt", "w");
    if (file == NULL) {
        printf("Không the mo file\n");
        return 1;
    }
    printf("Nhap vào so dong: ");
    scanf("%d", &num_lines);
    getchar();
    for (int i = 0; i < num_lines; i++) {
        printf("Nhap noi dung dong %d: ", i+1);
        fgets(line, sizeof(line), stdin);
        fputs(line, file);
    }
    fclose(file);
    file = fopen("bt3.txt", "r");
    if (file == NULL) {
        printf("Không the mo file\n");
        return 1;
    }
    printf("Noi dung file:\n");
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }
    fclose(file);
    return 0;
}

