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
    printf("Nhap so luong sinh vi�n: ");
    scanf("%d", &num_students);
    getchar(); 
    for (int i = 0; i < num_students; i++) {
        printf("Nhap th�ng tin sinh vi�n %d:\n", i+1);
        printf("Ho v� t�n: ");
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
        printf("Kh�ng the mo file\n");
        return 1;
    }
    for (int i = 0; i < num_students; i++) {
        fprintf(file, "Sinh vi�n %d:\n", i+1);
        fprintf(file, "Ho v� t�n: %s", students[i].name);
        fprintf(file, "Tuoi: %d\n", students[i].age);
        fprintf(file, "Sdt: %s", students[i].phone);
        fprintf(file, "Email: %s", students[i].email);
    }
    fclose(file);
    return 0;
}
