#include "holberton.h"
/**
 *print_number - prints all natural numbers from n to 98
 *@n: is the int that we use for the arguement
 *Return: 0
 */
void print_number(int n)
{
	for (n = 1; n <= 100; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
