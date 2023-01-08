#include "main.h"
/**
 * _sqrt_recursion - returns the square root of a given number.
 * @n: the number for which square root should be found.
 * Return: squareroot of n.
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (int natural_root(1, n));
}

/**
 * natural_root - a function that returns the value of
 * square root of a given number.
 * @x: the value of square root of n
 * @n: a given number
 *
 * Return: return x, otherwise return -1
 */

int natural_root(int x, int n)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (natural_root(x + 1, n));
}
