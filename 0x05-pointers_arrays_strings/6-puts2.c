#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string.
 * @str: input string.
 * Return: no return.
 */
void puts2(char *str)
{
	int abe = 0;

	while (str[abe] != '\0')
	{
		if (abe % 2 == 0)
		{
			_putchar(str[abe]);
		}
		abe++;
	}
	_putchar('\n');
}
