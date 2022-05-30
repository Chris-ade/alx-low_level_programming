#include "main.h"

/**
 * flip_bits - returns the number of bits to flip & get one number from another
 * @n: one number.
 * @m: two number.
 * Return: flip bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XOR = n ^ m;
	unsigned int i;

	for (i = 0; XOR; XOR >>= 1)
	{
		if (XOR & 1)
		{
			i++;
		}
	}

	return (i);
}

