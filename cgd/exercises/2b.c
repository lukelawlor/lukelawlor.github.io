#include <stdio.h>

void change(int *ptr);

int main(void)
{
	int num = 2;
	printf("num is %d\n", num);

	change(&num);
	printf("num is %d\n", num);

	return 0;
}

void change(int *ptr)
{
	*ptr = 5;
}
