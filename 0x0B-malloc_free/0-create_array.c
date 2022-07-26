#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *bc;
	unsigned int g;

	if (size == 0)
	{
		return (NULL);
	}

	bc = malloc(sizeof(c) * size);

	if (bc == NULL)
	{
		return (NULL);
	}
	for (g = 0; g < size; g++)
	{
		bc[g] = c;
	}
	return (bc);
}
