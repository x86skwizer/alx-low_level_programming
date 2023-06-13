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
 * str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 *
 * Return: pointer to memory contains the contents of s1 + s2
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i;
	int j;

	str = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));
	if (!str)
		return (NULL);
	i = 0;
	if (s1)
	{
		while (s1[i])
		{
			str[i] = s1[i];
			i++;
		}
	}
	j = 0;
	if (s2)
	{
		while (s2[j])
		{
			str[i] = s2[j];
			i++;
			j++;
		}
	}
	str[i] = '\0';
	return (str);
}
