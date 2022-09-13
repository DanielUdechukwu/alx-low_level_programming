#include <unistd.h>
#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabet ten times
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int alpha10, num;

	for (num = 0; num < 10; num++)
	{
		for (alpha10 = 'a'; alpha10 <= 'z'; alpha10++)
		{
			_putchar(alpha10);
		}
		_putchar('\n');
	}
}
