#include <unistd.h>

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
