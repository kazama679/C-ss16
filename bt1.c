#include <stdio.h>
int main() {
    FILE *file = fopen("C:Documents\\Quang\\1.txt", "w");
    if (file == NULL) {
        printf("Kh�ng the mo file.\n");
        return 1; 
    }
    char inputString[100];
    printf("Nhap chuoi: ");
    fgets(inputString, sizeof(inputString), stdin);
    fprintf(file, "%s", inputString);
    fclose(file);
    printf("Chuoi ky tu da ghi v�o file 1.txt.\n");
    return 0; 
}
