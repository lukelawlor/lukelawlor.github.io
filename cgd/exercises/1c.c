#include <stdio.h>
#include <stdbool.h>

// Test macro that prints whether or not the number passed is prime
#define	TEST(num)	if (is_prime(num)) \
				printf("The number " #num " is prime!\n"); \
			else \
				printf("The number " #num " is not prime... lame...\n")

bool is_prime(int num);
void test(int num);

int main(void)
{
	// Tests
	TEST(4);
	TEST(9);
	TEST(3);

	return 0;
}

bool is_prime(int num)
{
	for (int i = num - 1; i > 1; i--)
		if (num % i == 0)
			return false;
	return true;
}

void test(int num)
{
	if (is_prime(num))
		printf("The number %d is prime!\n", num);
	else
		printf("The number %d is not prime... lame...\n", num);
}
