#include "main.h"

/**
 * clear_bit - sets a value of a bit to 0 at a given index..
 * @n: number.
 * @index: move position change.
 * Return: 1 if all ok.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int start = 1;

	if ((sizeof(unsigned long int) * 8) - 1 < index)
	{
		return (-1);
	}
	start <<= index;
	*n &= ~start;

	return (1);
}

