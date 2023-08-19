#include <stdio.h>
#define SIZE 10

int main(){
	FILE *fp = fopen("1.c","r");
	
	if (fp != NULL){
		printf("open is successull\n");
		
		char letter = fgetc(fp); //reads file 2 character by character
		while(letter != EOF){
		
		
			printf("%c", letter);
			letter = fgetc(fp);
	}
		
	}

	fclose(fp);
	
	
	//#READ FILE BY A LINE AT A TIME
	
	fp = fopen("1.c","r");
	char str[SIZE];
	
	if (fp != NULL){
		printf("open is successfull \n");
		
		while(fgets(str, 10, fp)!= NULL){
			printf("%s", str);
		}
	}	
	
	fclose(fp);
	
	
	
	return 0;
}
