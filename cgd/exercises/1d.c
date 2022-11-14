#include <stdio.h>

#define	PRINTD(x)	printf("The value of " #x " is %d\n", x)

int main(void)
{
	int x, y, z;
	x = 2;
	y = 9;
	z = 5;

	PRINTD(x);
	PRINTD(y);
	PRINTD(z);

	return 0;
}
