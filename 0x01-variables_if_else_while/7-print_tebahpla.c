#include <stdio.h>
/**
 *main - print the lowercase alphabet in reverse
 *
 *Description: using the main function
 *this program prints "the lowercase alphabet in reverse"
 *Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'z' ; ch >= 'a' ; ch++)

	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
