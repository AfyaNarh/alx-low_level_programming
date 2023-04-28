#include "main.h"

/**
*_isalpha - Checks the alphabetic character
*@c: The  character to be checked
*Return: 0
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
