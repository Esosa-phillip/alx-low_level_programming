#include <stdio.h>

/**
 * main - Printsmultiples of 3 and 5
 *
 * Return: 0
 */
int main(void)
{
	for (a = 1; a < 1024; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
			b += a;
	}
	printf("%d\n", b);
	return (0);
}
