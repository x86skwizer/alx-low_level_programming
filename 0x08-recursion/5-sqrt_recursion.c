#include "main.h"

/**
 * _sqrt_checker - sqrt_recursion helper
 * @n: number
 * @m: number to increment
 *
 * Return: natural square root of a number
 */
int _sqrt_checker(int n, int m)
{
	if (m > n)
		return (-1);
	else if (m * m == n)
		return (m);
	return (_sqrt_checker(n, m + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 *
 * Return: natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_checker(n, 0));
}
