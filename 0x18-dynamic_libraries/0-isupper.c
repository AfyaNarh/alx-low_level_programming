#include "main.h"

/**
*_isupper - Check if a letter is upper
*@x: The numberto be checked
*Return: 1 for upper letter or 0 for anything else
*/

int _isupper(int x)

{
	if (x >= 'A' && x <= 'Z')
		return (1);
	else
		return (0);
}


