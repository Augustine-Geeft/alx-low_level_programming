#include <ctype.h>
#include "main.h"
/**
 * _isalpha - Entry point.
 * @c: input to be checked.
 * Return: 1 if c is a letter, lowercase or uppercase; 0 if otherwise.
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
