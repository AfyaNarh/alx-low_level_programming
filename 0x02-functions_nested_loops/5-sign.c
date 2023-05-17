#include <stdio.h>
#include "main.h"

/**
*print_sign - Prints the sign of a number
*@n: The number to be checked
*Return: 1 for positive num, -1 for negative num or zero for anything else
*/

int print_sign(int n)

{
	if (n > 0)
	{
		printf("%d is positive\n", n);
		return (1);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
		return (-1);
	}
	else
	{
		printf("%d of zero\n", n);
		return (0);
	}
}
