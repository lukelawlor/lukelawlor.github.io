// NOTE: to compile this program, you need to link the math library in your compile command.
// To do this, you must add "-lm" somewhere in your command.
//
// To compile this file specifically, use:
// 	gcc 2f.c -lm

#include <stdio.h>
#include <math.h>

int main(void)
{
	const double a = 36;
	const double b = 2;

	printf("The square root of %lf is %lf\n", a, sqrt(a));
	printf("The square root of %lf is %lf\n", b, sqrt(b));

	return 0;
}
