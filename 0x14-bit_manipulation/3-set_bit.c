#include "main.h"

/**
 * set_bit - sets a value of a bit to 1 at a given index.
 * @n: number.
 * @index: index index.
 * Return: output recursion.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int start = 1;

	if ((sizeof(unsigned long int) * 8) - 1 < index)
	{
		return (-1);
	}

	start <<= index;
	*n = *n | start;

	return (1);
}

