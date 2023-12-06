#include <stdio.h>
int main() {
    FILE *file;
    char line[100];
    int num_lines = 0;
    file = fopen("bt3.txt", "r");
    if (file == NULL) {
        printf("Không the mo file\n");
        return 1;
    }
    printf("Noi dung file:\n");
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
        num_lines++;
    }
    printf("So dong: %d\n", num_lines);
    fclose(file);
    return 0;
}

