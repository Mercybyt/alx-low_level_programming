#include "holberton.h"

/**
 * _puts - function that prints a string to standard output
 *@str: declaration of *str and parameters
 *Return: 0
 */

void _puts(char *str)
{
	int c;

	for (c = 0; str[c] != 0; ++c)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
