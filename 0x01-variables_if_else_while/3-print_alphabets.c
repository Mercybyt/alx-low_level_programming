#include <stdio.h>
/**
 *main - prints alphabet in lowercase and then in uppercase using putchar
 *
 *Description: using the main function
 *this program prints "alphabet in lowercase and uppercase"
 *Return: 0
 */
int main(void)
{
	char(ch);

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
