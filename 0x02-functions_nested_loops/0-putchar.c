#include <stdio.h>
#include "_putchar.c"
#include "main.h"

/**
 * main - Printing _putchar
 *
 * Return: Always 0.
 */


int main(void)
{

	char a[10] = "_putchar";
	int i = 0;

	while (a[i] != '\0')
		{
		_putchar(a[i]);
		i++;
		}
	putchar('\n');
	return (0);

}
