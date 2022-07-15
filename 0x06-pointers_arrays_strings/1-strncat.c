#include "main.h"

/**
 * _strncat - Concatenate two strings
 * @dest: Destination
 * @src: Source
 * @n: amount of bytes used from src
 * Return: Pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (j < 2)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
