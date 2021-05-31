#define _CRT_SECURE_NO_WARNINGS

#include "lab_2.h"

#include <stdio.h>
#include <math.h>

void Lab_2_1()
{
	double x, y;

	printf("Enter X: ");
	scanf("%lf", &x);
	printf("Enter Y: ");
	scanf("%lf", &y);

	if ((y <= x + 1) && (y <= -x + 1) && (y >= x - 1) && !(x < 0 && y < 0))
		printf("The point falls into the area!\n");
	else
		printf("The point not falls into the area!\n");
}

void Lab_2_2()
{
	double a = -0.6, b = 5.3, z, t;

	/*printf("Enter A: ");
	scanf_s("%lf", &a);
	printf("Enter B: ");
	scanf_s("%lf", &b);*/

	if (a < b)
		z = sqrt(fabs(a * a - b * b));
	else
		z = 1 - 2 * cos(a) * sin(b);

	if (z < b)
		t = cbrt(z + a * a * b);
	else if (z == b)
		t = 1 - log10(z) + cos(a * a * b);
	else
		t = 1 / cos(z * a);

	printf("\nResult: A = %4.4f, B = %4.4f, Z = %4.4f, T = %4.4f", a, b, z, t);
}
