#include "main.h"

/**
 * set_prime - detects if an input number is a prime number.
 * @n: input number.
 * @g: iterator.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int set_prime(int n, int g)
{
	if (n % g == 0)
	{
		if (n == g)
			return (1);
		else
			return (0);
	}
	return (0 + set_prime(n, g + 1));
}

/**
 * is_prime_number - detects if an input number is a prime number.
 * @n: input number.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (set_prime(n, 2));
}
