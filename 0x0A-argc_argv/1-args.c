#include <stdio.h>

/**
 *main - fumction that prints the number of arguements passedinto it
 *@argc: arguement that count input
 *@argv: arguement that stores strings in arrays of char
 *Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc)
	{
		printf("%d\n", argc - 1);
		(void)argv;
	}
	return (0);
}
