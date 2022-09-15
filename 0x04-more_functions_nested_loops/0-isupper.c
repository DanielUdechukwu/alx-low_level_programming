#include <ctype.h>
#include "main.h"

/**
 * _isupper - Checking for uppercase
 *
 * Return: Always 0.
 */

int _isupper(int c)
{

	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
