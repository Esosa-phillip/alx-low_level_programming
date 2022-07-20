#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: String.
 * Return: No return.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
	}
	else
	{
		_putchar('\n');
	}
}
