#include <unistd.h>

/**
 * main - a program that prints its name
 * @ac: number of args
 * @av: list of args
 *
 * Return: 0
 */
int main(int ac, char **av)
{
	int i;

	(void) ac;
	if (av[0])
	{
		i = 0;
		while (av[0][i])
			write(STDOUT_FILENO, &av[0][i++], 1);
		write(STDOUT_FILENO, "\n", 1);
	}
	return (0);
}
