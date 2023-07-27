#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * print_binary - Prints binary of number
 * @n: number
 */

void print_binary(unsigned long int n)

{
	char i;

	if (n == 0)
	{
		write(1, "0", 1);
		return;
	}
	if (n == 1)
	{
		write(1, "1", 1);
		return;
	}
	print_binary(n >> 1);
	i = (n & 1) ? '1' : '0';
	write(1, &i, 1);
}
