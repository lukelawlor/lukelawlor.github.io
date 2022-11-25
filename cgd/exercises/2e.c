#include <stdio.h>

#include "shapes.h"

// Returns the area of a rectangle
int rect_get_area(Rectangle *r);

int main(void)
{
	// You could initialize the rectangle like this
	Rectangle r = {0, 0, 2, 8};

	// Or assign it values directly like this
	r.x = 0;
	r.y = 0;
	r.width = 2;
	r.height = 8;

	printf("The area of the rectangle is %d\n", rect_get_area(&r));

	return 0;
}

// Returns the area of a rectangle
int rect_get_area(Rectangle *r)
{
	return r->width * r->height;
}
