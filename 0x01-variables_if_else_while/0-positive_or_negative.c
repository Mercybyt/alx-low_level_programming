#include <stdlib.h>
#include <time.h>

#include <stdio.h>
/**
 *main - positive or negative number
 *
 *Return: 0 on success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d", "n is a positive number\n");
	}
	else if (n < 0)
	{
		printf("%d", "n is a negative number\n");
	}
	else
	{
		printf("%d", "n is zero\n"
		return (0);
}
