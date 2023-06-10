#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * @ac: nbr of args
 * @av: list of args
 *
 * Return: 0
 */
int main(int ac, char **av)
{
	int n;
	int a;

	if (ac != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(av[1]);
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	a = 0;
	while (n / 25)
	{
		a += n / 25;
		n = n % 25;
	}
	while (n / 10)
	{
		a += n / 10;
		n = n % 10;
	}
	while (n / 5)
	{
		a += n / 5;
		n = n % 5;
	}
	while (n / 2)
	{
		a += n / 2;
		n = n % 2;
	}
	a = a + n;
	printf("%d\n", a);
	return (0);
}
