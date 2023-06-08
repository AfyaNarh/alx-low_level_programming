#include "main.h"

/**
 * get_bit - returns value of bit at a given index
 * @n: binary variable
 * @index: binary position
 * Return: index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * (8 - 1))
		return (-1);
	else
		return ((n >> index) & 1);
}
