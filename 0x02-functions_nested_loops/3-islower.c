#include "holberton.h"
/**
 *_islower - function that checks for lowercase character
 *@c: is the int that we use for the arguement of the function
 *
 *Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
