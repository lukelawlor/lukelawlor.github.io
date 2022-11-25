#ifndef	SHAPE_FUNCTIONS_H
#define	SHAPE_FUNCTIONS_H

#include "shapes.h"

// Prints out the members of a rectangle struct
void rect_print(Rectangle *r);

// Returns the area of a rectangle
int rect_get_area(Rectangle *r);

// Returns the distance between two points
double point_get_dist(Point *a, Point *b);

#endif
