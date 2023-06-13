#include "main.h"

/**
 * create_array - creates an array of chars with a specific char
 * @size: size of the array to be created
 * @c: char to initialize the array with
 *
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (!size || !c)
		return (NULL);
	arr = malloc(sizeof(char) * (size + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
