#include "main.h"

/**
 * main - _putchar string parameter
 *
 * Return: Always 0 for success
 */


int main(void)
{

	char ch[10] = "_putchar";
	int i = 0;

	while (ch[i] != '\0')
		{
		_putchar(ch[i]);
		i++;
		}
	_putchar('\n');
	return (0);

}
