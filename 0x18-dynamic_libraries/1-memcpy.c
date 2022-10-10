#include "main.h"

/**
 * _memcpy - Copies memor area.
 * @n: Bytes to be copied.
 * @src: Source memory area.
 * @dest: Destination memory area.
 * Return: Pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) =  *(src + i);
	}
	return (dest);
}
