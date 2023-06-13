#include "main.h"

/**
 * _strlen - calculate lenght of string
 * @s: string
 *
 * Return: lenght of s
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
 * _strdup - duplicates a string
 * @str: string to duplicate
 *
 * Return: pointer to newly allocated space copy of str
 */

char *_strdup(char *str)
{
	char *s;
	int i;

	if (!str)
		return (NULL);
	s = malloc(sizeof(char) * (_strlen(str) + 1));
	if (!s)
		return (NULL);
	i = 0;
	while (str[i])
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
