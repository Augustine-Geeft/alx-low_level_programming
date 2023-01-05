#include "main.h"
/**
 * _pow_recursion - returns the value of c raised to the power of y.
 * @x: number to be raised.
 * @y: the power.
 * Return: the power of a given number.
 */
int _pow_recursion(int x, int y)
{
	int result;

	result = x;
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		result = x * _pow_recursion(x, y - 1);
		return (result);
	}
}
