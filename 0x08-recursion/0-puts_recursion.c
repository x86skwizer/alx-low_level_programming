#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string
 */
void _puts_recursion(char *s)
{
	if (!s || !*s)
	{
		write(STDIN_FILENO, "\n", 1);
		return;
	}
	write(STDIN_FILENO, s, 1);
	_puts_recursion(s + 1);
}
