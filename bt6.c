#include <stdio.h>
struct Student {
    char name[50];
    int age;
    char phone[15];
    char email[50];
};
int main() {
    FILE *file;
    int num_students;
    struct Student students[100];  
    printf("Nhap so luong sinh viên: ");
    scanf("%d", &num_students);
    getchar(); 
    for (int i = 0; i < num_students; i++) {
        printf("Nhap thông tin sinh viên %d:\n", i+1);
        printf("Ho và tên: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        printf("Tuoi: ");
        scanf("%d", &students[i].age);
        getchar();  
        printf("Sdt: ");
        fgets(students[i].phone, sizeof(students[i].phone), stdin);
        printf("Email: ");
        fgets(students[i].email, sizeof(students[i].email), stdin);
    }
    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Không the mo file\n");
        return 1;
    }
    for (int i = 0; i < num_students; i++) {
        fprintf(file, "Sinh viên %d:\n", i+1);
        fprintf(file, "Ho và tên: %s", students[i].name);
        fprintf(file, "Tuoi: %d\n", students[i].age);
        fprintf(file, "Sdt: %s", students[i].phone);
        fprintf(file, "Email: %s", students[i].email);
    }
    fclose(file);
    return 0;
}
