#include "main.h"
/**
 * print_last_digit - prints last digit.
 * @n: input
 * Return: last digit
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	{
		n = 0 - n;
	}
	return (n);
}
