#include "holberton.h"

/**
 *print_rev - function that print string in reverse order
 *@s: declaration of *s and parameter for function print_rev
 *Return: Always 0
 */

void print_rev(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
	{
	}
	for (c = c - 1; c >= 0; c--)
		_putchar(s[c]);
	_putchar('\n');
}
