#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: number
 * @y: number
 *
 * Return: value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	int n;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else if (x == 0 || x == 1)
		return (x);
	n = x * _pow_recursion(x, y - 1);
	return (n);
}
