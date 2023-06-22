#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 * @...: ellipsis
 *
 * Return: sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int m;
	unsigned int i;
	int s;

	if (n == 0)
		return (0);
	va_start(ap, n);
	m = va_arg(ap, int);
	i = 0;
	s = 0;
	while (i < m)
	{
		s += va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return (s);
}
