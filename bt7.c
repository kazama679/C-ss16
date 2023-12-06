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
        printf("Nhap thông tin sách %d:\n", i+1);
        printf("Ma sách: ");
        fgets(books[i].id, sizeof(books[i].id), stdin);
        printf("Tên sách: ");
        fgets(books[i].title, sizeof(books[i].title), stdin);
        printf("Tác gia: ");
        fgets(books[i].author, sizeof(books[i].author), stdin);
        printf("Giá tien: ");
        scanf("%f", &books[i].price);
        getchar();  
        printf("The loai: ");
        fgets(books[i].genre, sizeof(books[i].genre), stdin);
    }
}
void save_books(struct Book *books, int num_books) {
    FILE *file = fopen("books.txt", "w");
    if (file == NULL) {
        printf("Không the mo file\n");
        return;
    }
    for (int i = 0; i < num_books; i++) {
        fprintf(file, "Sách %d:\n", i+1);
        fprintf(file, "Ma sách: %s", books[i].id);
        fprintf(file, "Tên sách: %s", books[i].title);
        fprintf(file, "Tác gia: %s", books[i].author);
        fprintf(file, "Giá tien: %.2f\n", books[i].price);
        fprintf(file, "The loai: %s", books[i].genre);
    }
    fclose(file);
}
void display_books() {
    FILE *file = fopen("books.txt", "r");
    if (file == NULL) {
        printf("Không the mo file\n");
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
        printf("1. Nhap so luong và thông tin sách\n");
        printf("2. Luu thông tin sách vào file\n");
        printf("3. Hien thi thông tin sách tu file\n");
        printf("4. Thoát\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);
        getchar(); 
        switch (choice) {
            case 1:
                printf("Nhap so luong sách: ");
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
