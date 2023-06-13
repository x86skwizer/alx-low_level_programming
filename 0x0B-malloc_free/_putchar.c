#include "main.h"

/**
 * _putchar - write a character
 * @c: character
 */
void _putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}
