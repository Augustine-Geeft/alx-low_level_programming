#include "main.h"
/**
 * _sqrt_recursion - returns the square root of a given number.
 * @n: the number for which square root should be found.
 * Return: squareroot of n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (natural_root(1, n));
	}
}

/**
 * natural_root - returns the natural root.
 * @x: the value of square root of n
 * @n: a given number
 * Return: return x, otherwise return -1
 */
int natural_root(int x, int n)
{
	if (x * x > n)
	{
		return (-1);
	}
	if (x * x == n)
	{
		return (x);
	}
	return (natural_root(x + 1, n));
}
