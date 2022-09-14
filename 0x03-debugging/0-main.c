#include "main.h"
#include "func.c"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
	int i;

	i = 98;
	positive_or_negative(i);

	/*int i;
	srand(time(0));
	i = rand() - RAND_MAX / 2;
	positive_or_negative(i);*/

	return (0);
}
