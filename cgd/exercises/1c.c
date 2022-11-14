#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num);
void test(int num);

int main(void)
{
	for (int i = 1; i <= 100; i++)
		test(i);

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
