#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_to_uint - converts binary number to unsigned integer
 * @b: variable for binary digits
 * Return: unsigned integer or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int a, result = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
		{
			return (0);
		}

		result = (result * 2) + (b[a] - '0');
	}

	return (result);
}

