#include <stdio.h>
/**
 * main - Entry point.
 *
 * Return: Always 0.
 */
int main(void)
{
	int m, n;

	for (m = 0; m < 9; m++)
	{
		for (n = m + 1; n < 10; n++)
		{
			putchar(m + '0');
			putchar(n + '0');
			if (m == 8 && n == 9)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
