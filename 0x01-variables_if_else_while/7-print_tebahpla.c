#include <stdio.h>

/**
 * main - Prints alphabets in reverse.
 *
 * Return: Always (0) success.
 */
int main(void)
{
	int a;

	for (a = 122; a > 96; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
