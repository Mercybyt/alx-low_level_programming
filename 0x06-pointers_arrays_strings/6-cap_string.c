#include "holberton.h"

/**
 *cap_string - capitalize each word
 *@str: string parameter
 *Return: str
 */
char *cap_string(char *str)
{
	int i;
	int cnt;
	char seperators[] = {32, 10, 9, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		for (cnt = 0; seperators[cnt] != '\0'; cnt++)
		{
			if ((str[i] == seperators[cnt]) && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			{
				str[i + 1] -= 32;
			}
		}
	}
	return (str);
}
