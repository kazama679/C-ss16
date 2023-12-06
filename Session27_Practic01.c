#include<stdio.h>
int main(){
	
	//Ghi them vao tap tin ky tu A 
	FILE *taptin = NULL;
	taptin = fopen("C:\\Users\\quang\\OneDrive\\Máy tính\\test.txt", "w+");
	if(taptin != NULL){
		fputc('A', taptin);
		fclose(taptin); 
	} 
	
	// Ghi them vao tap chuoi bat ky 
//	FILE *taptin = NULL;
//	taptin = fopen("test.txt", "a");
//	if(taptin != NULL){
//		fputs("Faker number one", taptin):
//		fclose(taptin); 
//	}

//	FILE *taptin = NULL;
//	int trl = 0;
//	taptin = fopen("test.txt", "w");
//	if(taptin != NULL){
//		printf("IT HOC KHO VC!"); // ðúng hay sai 
//		scanf("%d", &trl);
//		fprintf(taptin, "Nguoi dang su dung chiec may tinh nay ", trl);
//		fclose(taptin);
//	} 
	
	//
	
	return 0; 
} 
