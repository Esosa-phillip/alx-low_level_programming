#include "main.h"

/**
 * _strcmp - Compares two Strings
 * @s1: First string
 * @s2: Second string
 * Return: 0 if equal, another integer if not.
 */
int _strcmp(char *s1, char *s2)
{
	int st;
	int sb;

	st = 0;
	sb = 0;
	while (sb == 0)
	{
		if ((*(s1 + st) == '\0') && (*(s2 + st) == '\0')
				break;
		sb = *(s1 + st) - *(s2 + st);
		st++;
	}
	return (sb);
}
