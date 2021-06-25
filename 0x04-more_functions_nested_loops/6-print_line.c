#include "holberton.h"
/**
 * print_line - function that prints line
 * @n: is the integer for the paramaters of my function
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
