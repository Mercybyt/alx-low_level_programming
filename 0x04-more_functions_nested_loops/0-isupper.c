#include "holberton.h"
/**
 * _isupper - function that checks for uppercase character
 * @c: based integer ascii values
 * Return: 1 0r 0 based on condition
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
