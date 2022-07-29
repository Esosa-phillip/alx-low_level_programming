#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Function that allocates memory using malloc.
 * @b: amount of bytes.
 * Return: Pointer to the allocated memory.
 * If malloc fails, status value is equal to 98.
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
