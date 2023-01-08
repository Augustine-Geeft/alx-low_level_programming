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
	else
	{
		return (_sqrt_recursion(n, (n / 2) + 1));
	}
}
