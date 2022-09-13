#include <unistd.h>


/**
 * print_alphabet - Prints alphabet
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
