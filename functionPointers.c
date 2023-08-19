#include <stdio.h>

//Suntax
		// return type (*ptrName) (parameters) ;
		
//typedef  int (*FP)(int, int);
//FP fptr;
//fptr = add

typedef  int (*FP)(int, int);
		
int (*addPtr)(int, int);

int add (int a, int b){
	
	
	return a +b;
}

int sub (int a, int b){
	
	
	return a -b;
}


int execute(int a, int b, FP fp){ //sending function pointer as a parameter
	
	int result = fp(a,b);
	return result;
}


FP get(char c){
	
	if (c == '+')
		return add;
	else
		return sub;
}

int main(){

	addPtr=add;
	
	int output = addPtr(5,6);
	
	printf("%d \n", output);
	
	
	//PASS FPOINTERS FROM AND TO A FUNCTION  AS A PARAMETER
	
	printf("Sum of a and b = %d \n", execute(5,6, add)); //add means we are sending address of a add function
	printf("Sum of a and b = %d \n", execute(5,6, sub));
	
	
	//RETURN FUNCTION POINTERS FROM A FUNCTION
	//FP function(){	}
	
	FP fp;
	fp = get('+');
	printf("a +b = %d \n", fp(10,5));
	
	
	fp = get('-');
	printf("a - b = %d \n", fp(10,5));
	
	
	return 0;
}
