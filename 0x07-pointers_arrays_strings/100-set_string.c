#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: Source.
 * @to: Target address.
 * Return: No return.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
