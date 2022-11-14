#include <stdio.h>

#define	PI	3.141592

int main(void)
{
	double radius;

	printf("Please enter the radius: ");
	scanf("%lf", &radius);

	printf("The circumference is %lf\n", 2 * PI * radius);

	return 0;
}
