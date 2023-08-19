#include <stdio.h>

	struct employee
	{
    	int age;
    	int roll;
    	char name[10];
	};

struct employee * getDetails();


int main(){
	
	printf("hello\n");
	

	
	
//Function returning structure pointers

	struct employee * e1 = getDetails();
	
	printf("%d \n", e1->age);

	
	return 0;
}

struct employee * getDetails(){
	struct employee * ptr = malloc(sizeof(struct employee));
	ptr->age = 20;
	
	return ptr;	
	
}
