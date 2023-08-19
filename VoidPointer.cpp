#include <stdio.h>

int main(){
	
	void *ptr;
	int i = 2;
	char c = 'a';
	
	ptr = (&i);
	
	printf("%d\n", *(int *)ptr);  //We need to type cast the pointer, before de-refereneing it  
	
	printf("%p\n", ptr);
	printf("%p\n", ptr+1);  //As per GCC size of void pointer is 1 
	
	//Better to typecast before doing any arithmetic operations
	
	printf("%p\n", (int *)ptr);
	printf("%p\n\n\n", (int *)ptr+1);  //So as we have type-casted to int. It will incrememtn by 4 bytes = Size of int
	
	
	//Interger array
	int a[] = {1,2,3,4,5};
	
	printf("%p   %p \n", a+1 , &a + 1);  // a + 1 points to next interger value.  &a + 1 points to => (&a + size of array a * sizeof int) = &a + (5*4)
	
	
	//Pointer to an array and array of pointer
	int arr[5] = {10, 20, 30, 40, 50};
	
	int (*p)[5];  //Means p is an pointer to an array of 5 integers.
	p = &arr;	
	printf("%p %d  %d\n", p, *p, **p);  // **p gives output = 10 ,  *p == address of first variable.
	
	//Array of pointers
	
	int * arr1[5];    //arr is an array of 5 interger pointer
	int aa= 10, b=20, cc=30, d=40, e=50;
	arr1[0] = &aa;
	arr1[1] = &b;
	arr1[2] = &cc;
	arr1[3] = &d;
	arr1[4] = &e;
	
	printf("%d %d\n", *(arr1[0]), aa) ; //same value
	
	
	
	
	
	//2D Array and Pointers
	int d2[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
	
	int (*p2)[3][3];    //p is a pointers to a 2D array of interges
	p2 = &d2;
	
	printf("2d pointer \n %p   %p\n", p2, d2);
	
	//&d2 => is Pointer to 3*3 interger array
	//&d2 + 1 => next 3*3 array   == Baseaddress + 9 * sizeof int 
	//d2[0]] => is of type (int *)[3] . Pointer to 1 d array of intergers
	//d2[0][0] => first element in first array of integers
	
	
	
	//STRING AND POINTERS
	char str[6] = "Hello";
		
	char *chPtr = str;
	int count;
	
	
	for(count = 0 ; chPtr[count] != '\0';count++){
		printf("String pointer == \n i = %d  value = %c   value = %c\n", count, chPtr[count],  *(chPtr + count));
		printf("%s \n", str + count);  //Prints from starting address till \0 character  So. Hello, ello, llo , lo ,o
	}

	
	
	//Array of pointers to a string
	
	char * stringPtr[5] = {"Hindi", "Marathi", "Science", "Maths", "English"};  //Mmeory effiecient
	for(count =0; count < 5 ; count ++){
		printf("Array of pointers to a string == %d  %p   %s \n", count, stringPtr[count], stringPtr[count]);
	}
	return 0;
}
