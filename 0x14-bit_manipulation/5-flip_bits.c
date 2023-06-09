#include "main.h"

/**
 * flip_bits - returns number of bits needed
 *		to flip to get from one number to another
 * @n: the number
 * @m: number to be flipped
 * Return: number of bits you would need to flip from one number to another.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0;
	unsigned long int flip;

	flip = n ^ m;

	while (flip)
	{
		bits = bits + (flip & 1);
		flip >>= 1;
	}

	return (bits);
}
