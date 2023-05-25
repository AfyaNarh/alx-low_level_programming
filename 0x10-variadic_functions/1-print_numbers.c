#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 * Return: no return.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int b;

	va_start(list, n);

	for (b = 0; b < n; b++)
	{
		printf("%d", va_arg(list, int));
		if (separator && b < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(list);
}

