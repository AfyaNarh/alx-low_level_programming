#include "variadic_functions.h"

/**
 * print_strings - prints strings.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 * Return: no return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int c;
	char *str;

	va_start(list, n);

	for (c = 0; c < n; c++)
	{
		str = va_arg(list, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (c < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(list);
}

