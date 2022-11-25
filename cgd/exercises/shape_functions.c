#include <stdio.h>
#include <math.h>	// For sqrt()

#include "shape_functions.h"

// Prints out the members of a rectangle struct
void rect_print(Rectangle *r)
{
	printf("x is %d\n", r->x);
	printf("y is %d\n", r->y);
	printf("width is %d\n", r->width);
	printf("height is %d\n", r->height);
}

// Returns the area of a rectangle
int rect_get_area(Rectangle *r)
{
	return r->width * r->height;
}

// Returns the distance between two points
double point_get_dist(Point *a, Point *b)
{
	const double x_diff = a->x - b->x;
	const double y_diff = a->y - b->y;
	return sqrt((x_diff * x_diff) + (y_diff * y_diff));
}
