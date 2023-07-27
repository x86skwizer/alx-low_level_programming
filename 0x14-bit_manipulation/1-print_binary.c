#include "main.h"
#include <unistd.h>

/**
 * _power - calculate (base and power)
 * @base: base
 * @pow: power
 * Return: value of base and power
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int num;
	unsigned int i;

	num = 1;
	for (i = 1; i <= pow; i++)
		num *= base;
	return (num);
}

/**
 * print_binary - prints the binary representation of a number
 * @n: num of prented
 */
void print_binary(unsigned long int n)
{
	unsigned long int dev, result;
	char flag;

	flag = 0;
	dev = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (dev != 0)
	{
		result = n & dev;
		if (result == dev)
		{
			flag = 1;
			write(1, "1", 1);

		}
		else if (flag == 1 || dev == 1)
			write(1, "0", 1);
		dev >>= 1;
	}
}
