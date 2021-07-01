#include "holberton.h"
/**
 * _strcmp - function that compares two strings
 * @s2: paramater for string 2
 * @s1: paramater for string 1
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			a = 1;
		}
		s1++;
		s2++;
	}
	if (a == 1)
		return (0);
	else
		return (1);
}
