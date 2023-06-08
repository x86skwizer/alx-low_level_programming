#include "main.h"

/**
 * _strlen - returns lenght of string
 * @s: string
 *
 * Return: lenght of string
 */
int _strlen(char *s)
{
	int i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
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

	len = _strlen(s);
	if (len == 0 || len == 1)
		return (1);
	pal = boucle_pal(s, len, 0);
	return (pal);
}
