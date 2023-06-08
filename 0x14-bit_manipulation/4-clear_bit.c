#include "main.h"

/**
 * clear_bit - set bit at a given index to 0
 * @n: binary variable pointer
 * @index: binary position
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 7)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
