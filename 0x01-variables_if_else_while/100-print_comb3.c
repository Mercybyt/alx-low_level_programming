#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits with commas
 *
 * Description: using the main function
 * this program prints prints all possible different combinations of two digits
 * Return: 0
 */
int main(void)
{
	int n;
	int m;

	for (n = 0 ; n < 99; n++)
	{
		for (m = 0; m <= 99; m++)
		{
			if ((n != m) && (n < m))
			{
				putchar(n / 10 + '0');
				putchar(n % 10 + '0');
				putchar(' ');
				putchar(m / 10 + '0');
				putchar(m % 10 + '0');

				if (n ==98 && m == 99)
				{
				}
				else
				{
					putchar( ',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
