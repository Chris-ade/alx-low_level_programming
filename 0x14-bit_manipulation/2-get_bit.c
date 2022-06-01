#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number.
 * @index: bits.
 * Return: position.
 */

int get_bit(unsigned long int n, unsigned int index)
{

	if (sizeof(unsigned long int) * 8 < index)
	{
		return (-1);
	}
	n  >>= index;
	if (n & 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
