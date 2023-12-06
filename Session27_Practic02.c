#include<stdio.h>

int main(){
	FILE* taptin = NULL;
	int kytuHientai = 0;
	taptin = fopen("test.txt", "r");
	if(taptin != NULL){
		do{
			kytuHientai = fgetc(taptin);
			printf("c", kytuHientai); 
		} while(kytuHientai != EQF);
		fclose(taptin); 
	} 
	return 0; 
} 
