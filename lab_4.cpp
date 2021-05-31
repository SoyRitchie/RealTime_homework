#define _CRT_SECURE_NO_WARNINGS

#include "lab_4.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Lab_4_1()
{
	const int N = 10;
	const int rndmin = 0;
	const int rndmax = 11;

	srand(time(0));

	int arr[N][N];
	int i, j;

	for (i = 0; i < N; i++)
		for(j = 0; j < N; j++)
			arr[i][j] = rand() % rndmax + rndmin;

	printf("Square matrix, size = %i, elements = [%i; %i]\n\nSource matrix:\n", N, rndmin, rndmax - 1);

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
			printf("%3i", arr[i][j]);
		printf("\n");
	}

	for (i = 0; i < N; i++)
		for (j = 0; j < N / 2; j++)
			arr[i][N - 1 - j] = arr[i][j];

	printf("\n\nMirror matrix:\n");

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
			printf("%3i", arr[i][j]);
		printf("\n");
	}
}
