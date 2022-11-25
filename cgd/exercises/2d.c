#include <stdio.h>

// NOTE: it's a good idea to write a comment that explains what definitions/functions you want from a header file if it isn't obvious

#include "shapes.h"	// For Rectangle

// Prints out the members of a rectangle struct
void rect_print(Rectangle *r);

int main(void)
{
	Rectangle r = {0, 0, 5, 10};
	
	print_rectangle(&r);

	return 0;
}

// Prints out the members of a rectangle struct
void rect_print(Rectangle *r)
{
	printf("x is %d\n", r->x);
	printf("y is %d\n", r->y);
	printf("width is %d\n", r->width);
	printf("height is %d\n", r->height);
}
