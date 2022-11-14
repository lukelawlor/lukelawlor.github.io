#include <stdio.h>

// Prints the number num rep times
void print_num_rep(int num, int rep);

int main(void)
{
	// Tests
	print_num_rep(1, 2);
	print_num_rep(8, 5);
	print_num_rep(0, 3);

	return 0;
}

// Prints the number num rep times
void print_num_rep(int num, int rep)
{
	for (int i = 0; i < rep; i++)
	{
		// NOTE: If you didnt include a newline character here (\n) don't worry. I won't be taking off any fake points
		printf("%d\n", num);
	}
}
