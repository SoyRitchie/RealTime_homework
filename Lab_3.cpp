#define _CRT_SECURE_NO_WARNINGS

#include "lab_3.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Lab_3_1()
{
	const int len = 50;
	const int range = 10;
	const int rndmin = 0;
	const int rndmax = 11;

	srand(time(0));

	int* arr = (int*)malloc(len * sizeof(int));
	float avgm = -1;
	float avgt;
	int a, b;
	int csum = 0;
	int i;

	for (i = 0; i < len; i++)
		arr[i] = rand() % rndmax + rndmin;

	for (i = 0; i < len; i++)
	{
		csum += arr[i];
		if (i >= range - 1)
		{
			if (i > range - 1)
				csum -= arr[i - range];

			avgt = csum / (float)range;
			if (avgt > avgm)
			{
				avgm = avgt;
				b = i + 1;
				a = b - range + 1;
			}
		}
	}

	printf("Array length: %i, elements [%i; %i], scan range: %i\n\n", len, rndmin, rndmax - 1, range);
	printf("Result: max avg value = %3.3f on numbers from %i to %i\n", avgm, a, b);

	free(arr);
}
