#include "main.h"
#include <stdio.h>

/**
*_strlen - return the length of a string
*@s: Thetring
*Return: 0
*/
int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
		length++;
	return (length);
}
