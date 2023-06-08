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

/**
 * boucle_pal - returns 1 if a string is a palindrome and 0 if not
 * @s: string
 * @len: lenght of string
 * @i: index to increment
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */
int boucle_pal(char *s, int len, int i)
{
	if (i > len / 2)
		return (1);
	else if (s[i] != s[len - i - 1])
		return (0);
	return (boucle_pal(s, len, i + 1));
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int len;
	int pal;

	len = _strlen_recursion(s);
	if (len == 0 || len == 1)
		return (1);
	pal = boucle_pal(s, len, 0);
	return (pal);
}
