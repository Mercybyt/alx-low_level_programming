#include <stdio.h>
/**
 * main -  prints all single digit numbers of base 10 starting from 0
 *
 * Description: using the main function
 * this program prints " print single digit numbers of base 10 using putchar"
 * Return: 0
 */
int main(void)
{
	char b;

	for (b = '0' ; b <= '9'; b++)

	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}