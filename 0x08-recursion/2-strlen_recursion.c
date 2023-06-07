#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 *
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (s && *s)
		i += 1 + _strlen_recursion(s + 1);
	return (i);
}
