#include "main.h"

/**
 * main - Printing char parameters with loops.
 *
 * Return: Always 0.
 */
int _putchar(char);

int main(void)
{

	char a[10] = "_putchar";
	int i = 0;

	while (a[i] != '\0')
		{
		_putchar(a[i]);
		i++;
		}
	_putchar('\n');
	return (0);

}
