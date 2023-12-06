#include <stdio.h>
#include <stdlib.h>
struct Book {
    char id[10];
    char title[50];
    char author[50];
    float price;
    char genre[20];
};
void input_books(struct Book *books, int num_books) {
    for (int i = 0; i < num_books; i++) {
        printf("Nhap th�ng tin s�ch %d:\n", i+1);
        printf("Ma s�ch: ");
        fgets(books[i].id, sizeof(books[i].id), stdin);
        printf("T�n s�ch: ");
        fgets(books[i].title, sizeof(books[i].title), stdin);
        printf("T�c gia: ");
        fgets(books[i].author, sizeof(books[i].author), stdin);
        printf("Gi� tien: ");
        scanf("%f", &books[i].price);
        getchar();  
        printf("The loai: ");
        fgets(books[i].genre, sizeof(books[i].genre), stdin);
    }
}
void save_books(struct Book *books, int num_books) {
    FILE *file = fopen("books.txt", "w");
    if (file == NULL) {
        printf("Kh�ng the mo file\n");
        return;
    }
    for (int i = 0; i < num_books; i++) {
        fprintf(file, "S�ch %d:\n", i+1);
        fprintf(file, "Ma s�ch: %s", books[i].id);
        fprintf(file, "T�n s�ch: %s", books[i].title);
        fprintf(file, "T�c gia: %s", books[i].author);
        fprintf(file, "Gi� tien: %.2f\n", books[i].price);
        fprintf(file, "The loai: %s", books[i].genre);
    }
    fclose(file);
}
void display_books() {
    FILE *file = fopen("books.txt", "r");
    if (file == NULL) {
        printf("Kh�ng the mo file\n");
        return;
    }
    char line[100];
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }
    fclose(file);
}
int main() {
    struct Book books[100];  
    int num_books;
    int choice;  
    do {
        printf("\nMENU\n");
        printf("1. Nhap so luong v� th�ng tin s�ch\n");
        printf("2. Luu th�ng tin s�ch v�o file\n");
        printf("3. Hien thi th�ng tin s�ch tu file\n");
        printf("4. Tho�t\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);
        getchar(); 
        switch (choice) {
            case 1:
                printf("Nhap so luong s�ch: ");
                scanf("%d", &num_books);
                getchar(); 
                input_books(books, num_books);
                break;
            case 2:
                save_books(books, num_books);
                break;
            case 3:
                display_books();
                break;
        }
    } while (choice != 4);
    return 0;
}
