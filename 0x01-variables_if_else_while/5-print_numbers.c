#include <stdio.h>
/**
 *main - print all single digit numbers of base 10 starting from 0
 *
 *Description: using the main function
 *this program "prints all single digit numbers of base 10 starting from 0"
 *Return: 0
 */
int main(void)
{
	int i;

	for (i = 0 ; 1 <= 10 ; i++)

	{
		if (i != 10)
		putchar(i);
	}
	putchar('\n');
	return (0);
}
