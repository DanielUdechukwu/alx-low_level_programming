#include "main.h"

/**
 * _puts - Function prints a string to stdout.
 * @str: String to print
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
