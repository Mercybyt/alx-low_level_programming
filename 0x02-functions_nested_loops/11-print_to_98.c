#include "holberton.h"
/**
 *print_to_98 - prints all natural numbers from n to 98
 *@n: is the int that we use for the arguement
 *Return: 0
 */
void print_to_98(int n)
{
	for (n = 5; n <= 98; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
	_putchar(',');
	_putchar(' ');
}
