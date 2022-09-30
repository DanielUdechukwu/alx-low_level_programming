#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints number of arguments passed.
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0.
 */

int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
