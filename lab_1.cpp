#define _CRT_SECURE_NO_WARNINGS

#include "lab_1.h"

#include <stdio.h>
#include <math.h>

void Lab_1_1()
{
	float a, b, c, x, s;
	printf("Enter the hypotenuse and angle of the triangle: ");
	scanf("%f %f", &c, &x);
	a = c * sin(x);
	b = c * cos(x);
	s = a * b;
	printf("\nResult: a = %7.2f b = %7.2f S = %7.2f", a, b, s);
}

void Lab_1_2()
{
	float x, y = 4, t = 3;

	/*printf("Enter Y: ");
	scanf("%f", &y);
	printf("Enter T: ");
	scanf("%f", &t);*/

	x = (8 * (cos(t) / sin(t) + 2)) / (exp(t) + 2) - pow(y, 2);

	printf("\nY = %4.4f, T = %4.4f, X = %4.4f", y, t, x);
}
