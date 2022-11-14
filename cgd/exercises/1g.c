#include <stdio.h>

void print_yes(void);

int main(void)
{
	print_yes();
	print_yes();
	print_yes();
	return 0;
}

void print_yes(void)
{
	// The number of times that the function has been called
	static int calls = 0;
	calls++;
	
	for (int i = 0; i < calls; i++)
		printf("Yes");
	printf("\n");
}
