#include <stdio.h>
#include "_putchar.c"
#include "main.h"

/**
 * print_alphabet - Prints
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
_putchar('\n');
}

/**
 * main - Prints alpha
 *
 * Return: Always 0.
 */

int main(void)
{
	print_alphabet();
	return (0);
}
