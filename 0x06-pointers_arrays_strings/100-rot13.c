#include "holberton.h"

/**
 *rot13 - function that encodes a string using rot13
 *@s: declaratiom of poimter *s
 *Return: char
 */

char *rot13(char *s)
{
	int i = 0;
	int j = 0;
	char *l = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *r13 = "NMOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*(s + i) != '\0')
	{
		while (*(l + j) != '\0')
		{
			if (*(s + i) == *(l + j))
			{
				*(s + i) = *(r13 + j);
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
}
