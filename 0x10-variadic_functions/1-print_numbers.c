#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: ellipsis
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int nbr;

	if (!separator || !n)
		return;
	va_start(ap, n);
	i = 0;
	while (i < n)
	{
		nbr = va_arg(ap, int);
		printf("%d", nbr);
		if (i < n - 1)
			printf("%s", separator);
		else if (i == n - 1)
			printf("\n");
		i++;
	}
	va_end(ap);
}
