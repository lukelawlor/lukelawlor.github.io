#include <stdio.h>
#include <math.h>	// For sqrt()

#include "shapes.h"

// Returns the distance between two points
double point_get_dist(Point *a, Point *b);

int main(void)
{
	Point a = {0, 5};
	Point b = {8, 22};

	printf("The distance between the two points is %lf\n", point_get_dist(&a, &b));

	return 0;
}

// Returns the distance between two points
double point_get_dist(Point *a, Point *b)
{
	const double x_diff = a->x - b->x;
	const double y_diff = a->y - b->y;
	return sqrt((x_diff * x_diff) + (y_diff * y_diff));
}
