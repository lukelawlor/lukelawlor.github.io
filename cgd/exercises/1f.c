#include <stdio.h>

#define	PRINTHI

int main(void)
{
#ifdef	PRINTHI
	printf("HI\n");
#else
	printf("HELLO\n");
#endif
	return 0;
}
