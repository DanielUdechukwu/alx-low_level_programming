#include "main.h"
#include <ctype.h>

/**
 * _isdigit - Checking if c is input
 * 
 * Return: 1 if output is a number
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
