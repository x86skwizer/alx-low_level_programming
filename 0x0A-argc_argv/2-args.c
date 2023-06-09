#include <unistd.h>

/**
 * main - program that prints all arguments it receives
 * @ac: number of args
 * @av: list of args
 *
 * Return: 0
 */
int main(int ac, char **av)
{
	int i;
	int j;

	i = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
			write(STDOUT_FILENO, &av[i][j++], 1);
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
	(void)ac;
	return (0);
}
