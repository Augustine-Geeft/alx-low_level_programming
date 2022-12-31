#include <stdio.h>
/**
 * main - Entry point.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	char m;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
	}
	for (m = 'a'; m <= 'f'; m++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
