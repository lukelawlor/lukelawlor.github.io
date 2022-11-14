#include <stdio.h>

void print_call(void);

int main(void)
{
	print_call();
	print_call();
	print_call();
	return 0;
}

void print_call(void)
{
	// The number of times that the function has been called
	static int calls = 0;
	calls++;
	
	for (int i = 0; i < calls; i++)
		printf("Call");
	printf("\n");
}
