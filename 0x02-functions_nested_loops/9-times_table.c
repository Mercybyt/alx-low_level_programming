#include "holberton.h"
/**
 * times_table - function that prints the 9 times table, starting with 0
 * Return: void
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		{
		_putchar(i);
		}
	for (j = 0; j < 10; j++)
	{
		_putchar(j);
	}
	k = i * j;
	{
		_putchar(k);
	}
	}
}
