// C program to illustrate Pointers
#include <stdio.h>

// dummy function
void func(int a, int b){};

int main()
{
  
  int var = 20;

	// declare pointer variable
	int* ptr;

	// note that data type of ptr and var must be same
	ptr = &var;

	// assign the address of a variable to a pointer
	printf("Value at ptr = %p \n", ptr);
	printf("Value at var = %d \n", var);
	printf("Value at *ptr = %d \n", *ptr);
  
  // ============================================================ 
  
	// dummy variables definitions
	int a = 10;
	char c = 'G';

	// pointer definitions of different types
	int* ptr_int = &a;
	char* ptr_char = &c;
	void (*ptr_func)(int, int) = &func;
	void* ptr_vn = NULL;

	// printing sizes
	printf("Size of Integer Pointer \t:\t%d bytes\n",
		sizeof(ptr_int));
	printf("Size of Character Pointer\t:\t%d bytes\n",
		sizeof(ptr_char));
	printf("Size of Function Pointer\t:\t%d bytes\n",
		sizeof(ptr_func));
	printf("Size of NULL Void Pointer\t:\t%d bytes",
		sizeof(ptr_vn));

	return 0;
}

