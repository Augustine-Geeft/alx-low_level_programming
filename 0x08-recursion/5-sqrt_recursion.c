#include "main.h"
/**
 * _sqrt_recursion - returns the square root of a given number.
 * @n: the number for which square root should be found.
 * Return: squareroot of n.
 */
int _sqrt_recursion(int n)
{
	int root;

	root = 0;
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
		return (find_sqrt(n, root));
	}
}
