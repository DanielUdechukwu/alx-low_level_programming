#include "main.h"
/**
 * _isupper - Checking for uppercase
 * @c: first integer
 *
 * Return: Always 1 if uppercase
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
