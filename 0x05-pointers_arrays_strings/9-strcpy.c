
#include "holberton.h"
#include "string.h"

/**
 **_strcpy - copies the string pointed to by src
 *@dest: declaration of *desc and parameters for function
 *@src: declaration of *src and parameters for function
 *Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	{
		_putchar('\0');
	}
}
