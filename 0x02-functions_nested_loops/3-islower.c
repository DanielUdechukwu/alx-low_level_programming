#include <unistd.h>

/**
 * _islower - Returns 1 if lower case
 *
 * Returns: Always 0.
 */


int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

