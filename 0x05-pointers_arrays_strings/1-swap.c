#include "holberton.h"

/**
 *swap_int - function that swap the value of two integers
 *@a: declaration of a and parameters for arguement swap_int
 *@b: declaration of b and parameters for arguement swap_int
 *Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
