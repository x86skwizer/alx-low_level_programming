#include "main.h"
#include <unistd.h>

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string
 */
void _print_rev_recursion(char *s)
{
	if (!s || !*s)
		return;
	_print_rev_recursion(s + 1);
	if (*s == '\0')
		write(STDOUT_FILENO, "\n", 1);
	else
		write(STDOUT_FILENO, s, 1);
}
