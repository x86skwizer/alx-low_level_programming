#include <unistd.h>

void putnbr(int n)
{
	char c;


	if (n / 10)
		putnbr(n / 10);
	c = n % 10 + 48;
	write(STDOUT_FILENO, &c, 1);		
}

int main(int ac, char **av)
{
	ac--;
	putnbr(ac);
	write(STDOUT_FILENO, "\n", 1);
	(void)av;
	return (0);
}
