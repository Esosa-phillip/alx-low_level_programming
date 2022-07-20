#include "main.h"

/**
 * sql - Finds the square root of n
 * @n: input number.
 * @i: iterator.
 * Return: square root or -1.
 */
int sql(int n, int i)
{
	if (n == i * i)
		return (i);
	else if (n < i * i)
		return (-1);

	return (sql(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sql(n, 0));
}
