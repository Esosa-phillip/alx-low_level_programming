#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Destination.
 * @src: Source
 *
 * Return: Pointer to Dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (j >= 0)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
