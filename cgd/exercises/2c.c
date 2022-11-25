#include <stdio.h>

void print_address(void *ptr);

int main(void)
{
	int a = 1;
	float b = 1.5;
	char c = 'a';

	int *a_ptr = &a;
	float *b_ptr = &b;
	char *c_ptr = &c;

	print_address((void *) a_ptr);
	print_address((void *) b_ptr);
	print_address((void *) c_ptr);

	return 0;
}

void print_address(void *ptr)
{
	printf("The address is %p\n", ptr);
}
