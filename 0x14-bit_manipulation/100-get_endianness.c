#include "main.h"

/**
 * get_endianness - Checks the endianness.
 * Return: If big-endian - 0 or if little-endian - 1.
 */
int get_endianness(void)
{
	int check = 1;
	char *endian = (char *)&check;

	if (*endian == 1)
		return (1);

	return (0);
}
