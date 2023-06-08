#include "main.h"

/**
 * _prime_checker - is_prime_number helper
 * @n: number
 * @m: number to increment
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int _prime_checker(int n, int m)
{
	if (m > n / 2)
		return (1);
	else if (n % m == 0)
		return (0);
	return (_prime_checker(n, m + 1));
}

/**
 * is_prime_number - returns 1 if is a prime number, otherwise return 0
 * @n: number
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else if (n == 2)
		return (1);
	return (_prime_checker(n, 2));
}
