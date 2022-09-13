#include <stdio.h>
#include "_putchar.c"
#include "main.h"

void print_alphabet(void);

/**
 * main - Description
 *
 * Return: Always 0.
 */

int main(void)
{
char alpha;

/**
 * print_alphabet - Alphabet
 *
 * Return: Always 0.
 */

char print_alphabet(void)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
	_putchar('\n');

	}

return (0);
}


