#include "main.h"

/**
 * _isdigit - Checking if c is input
 * @c: first integer
 *
 * Return: 1 for success
 */

int _isdigit(int c)
{
	if (c >= '0' && c < '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
