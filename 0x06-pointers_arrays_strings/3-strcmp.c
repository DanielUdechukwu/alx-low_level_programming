#include "main.h"

/*
 * _strcmp - Function compares pointers to two strings, s1 and s2.
 *
 * @s1: First string
 * @s2: Second string
 *
 * Return: Always 0.
 */



int _strcmp(char *s1, char *s2)
{

	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
