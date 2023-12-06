#include<stdio.h>
int main(){
    FILE *file = NULL;
    int count;
    char content[100];
    file = fopen("D:Documents\\Quang\\3.txt","w");
    if(file == NULL){
        printf("khong mo duoc file.\n");
        return 1;
    }
    printf("nhap so dong cua noi dung: ");
    scanf("%d",&count);
    for(int i = 0; i < count;i++){
        printf("Nhap noi dung dong %d: ",i+1);
        fflush(stdin);
        fgets(content, sizeof(content), stdin);
        fprintf(file, "noi dung dong %d :%s", i+1, content);
    }
    fclose(file);
    printf("Chuoi da duoc ghi vào file 3.txt\n");
    return 0;
}
