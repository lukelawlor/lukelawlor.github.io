// To compile the entire program, use:
// 	gcc 2i.c shape_functions.c -lm

#include <stdio.h>

#include "shape_functions.h"

int main(void)
{
	// Testing rectangles
	Rectangle rect = {0, 0, 5, 10};

	rect_print(&rect);
	printf("The area is %d\n", rect_get_area(&rect));

	// Testing points
	Point rect_point = {rect.x, rect.y};
	Point other_point = {20, 22};

	printf("The distance between the points is %lf\n", point_get_dist(&rect_point, &other_point));

	return 0;
}
