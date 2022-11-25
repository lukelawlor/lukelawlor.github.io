#include <stdio.h>

int main(void)
{
	char c = 'a';
	char *ptr = &c;

	// for (;;) means infinite loop, so does while (1) or while (true) if you #included stdbool.h
	for (;;)
	{
		printf("%c", *ptr);
		ptr++;
	}

	return 0;
}
