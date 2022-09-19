#include "main.h"

/**
 * _puts - Function prints a string to stdout.
 * @str: String to print
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
	int i = *str;
	while (i != '\0')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
