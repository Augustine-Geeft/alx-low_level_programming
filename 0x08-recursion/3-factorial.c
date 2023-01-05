#include "main.h"
/**
 * factorial - prints the factorial of a number.
 * @n: string whose factorial is to be returned.
 * Return: factorial.
 */
int factorial(int n)
{
	int result;

	result = n;
	if (n < 0)
	{
		return (-1);
	}
	else if (n >= 0 && n <= 1)
	{
		return (1);
	}
	else
	{
		result = n * factorial(n + 1);
		return (result);
	}
}
