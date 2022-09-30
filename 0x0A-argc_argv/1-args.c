#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints number of arguments passed.
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0.
 */

int main(int argc, char __attribute__ ((unused)) *argv[])
{
	if (argc > 1)
	{
		int i, j;

		for (i = 1; i < argc; i++)
		{
			j = i;
		}
		printf("%d\n", j);
	}
	return (0);
}
