#include <stdlib.h>
#include <stdio.h>

/**
 * check_av - check for non digits
 * @av: string
 *
 * Return: 0 on success, 1 otherwise
 */
int check_av(char *av)
{
	int i;

	i = 0;
	while (av[i])
	{
		if (av[i] < 48 || av[i] > 57)
			return (1);
		i++;
	}
	return (0);
}

/**
 * main - program that adds positive numbers
 * @ac: number of args
 * @av: list of args
 *
 * Return: 0
 */
int main(int ac, char **av)
{
	int i;
	int n;

	if (ac == 1)
	{
		printf("0\n");
		return (0);
	}
	i = 1;
	while (av[i])
	{
		if (check_av(av[i]))
		{
			printf("Error\n");
			return (1);
		}
		n += atoi(av[i++]);
	}
	printf("%d\n", n);
	return (0);
}
