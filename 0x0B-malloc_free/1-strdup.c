#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 * Return: pointer of an array of chars.
 */
char *_strdup(char *str)
{
	char *stranded;
	unsigned int a, b;

	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; str[a] != '\0'; a++)
	{
		;
	}

	stranded = (char *)malloc(sizeof(char) * (a + 1));

	if (stranded == NULL)
	{
		return (NULL);
	}
	for (b = 0; b <= 1; b++)
	{
		stranded[b] = str[b];
	}
	return (stranded);
}
