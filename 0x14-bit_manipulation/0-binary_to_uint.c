#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: Binary.
 * Return: the converted number, or 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int h;
	int len, btwo;

	if (!b)
		return (0);

	h = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, btwo = 1; len >= 0; len--, btwo *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		if (b[len] & 1)
		{
			h += btwo;
		}
	}
	return (h);
}
