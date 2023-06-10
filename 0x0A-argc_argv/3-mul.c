#include <unistd.h>
#include <stdlib.h>

/**
 * putnbr - write number on stdout
 * @n: number
 */
void putnbr(int n)
{
	char c;

	if (n < 0)
	{
		write(STDOUT_FILENO, "-", 1);
		n *= -1;
	}
	if (n / 10)
		putnbr(n / 10);
	c = (n % 10) + 48;
	write(STDOUT_FILENO, &c, 1);
}

/**
 * main -  program that multiplies two numbers
 * @ac: number of args
 * @av: lists of args
 *
 * Return: 0
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		write(STDOUT_FILENO, "Error\n", 6);
		return (1);
	}
	putnbr(atoi(av[1]) * atoi(av[2]));
	write(STDOUT_FILENO, "\n", 1);
	return (0);
}
