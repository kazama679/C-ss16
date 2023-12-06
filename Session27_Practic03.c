#include<stdio.h>
int main(){
	FILE* taptin =NULL;
	const int SO_KY_TU_TOI_DA = 1000;
	char chuoi[SO_KY_TU_TOI_DA] = "";
	taptin = fopen("test.txt", "r");
	if(taptin != NULL)
	{
		fgets(chuoi, SO_KY_TU_TOI_DA, taptin);
		printf("%s", chuoi);
		fclose(taptin); 
	 } 
	 return 0; 
} 
