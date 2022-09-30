#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplying two arguements
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	char str[] = "Error";
	int mul;

	if (argc < 2)
	{
		printf("%s\n", str);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
