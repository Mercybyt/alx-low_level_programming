
CelestineAkpanoko
/
holbertonschool-low_level_programming
Code
Pull requests
Actions
Projects
Wiki
Security
Insights
holbertonschool-low_level_programming/0x06-pointers_arrays_strings/8-print_diagsums.c

Brennan D Baraban Fixed array indexing
 0 contributors
34 lines (28 sloc)  568 Bytes
/*
 * File: 8-print_diagsums.c
 * Auth: Brennan D Baraban
 */

#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 *                  of a square matrix of integers.
 * @a: The matrix of integers.
 * @size: The size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int index, sum1 = 0, sum2 = 0;

	for (index = 0; index < size; index++)
	{
		sum1 += a[index];
		a += size;
	}

	a -= size;

	for (index = 0; index < size; index++)
	{
		sum2 += a[index];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
