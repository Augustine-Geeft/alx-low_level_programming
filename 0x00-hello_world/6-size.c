#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: 0
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;
printf("Size of a char: %c byte(s)\n", sizeof(a));
printf("size of an int: %d byte(s)\n", sizeof(b));
printf("size of a long int: %ld byte(s)\n", sizeof(c));
printf("size of a long long int: %lld byte(s)\n", sizeof(d));
printf("size of a float: %f byte(s)\n", sizeof(e));
return (0);
}
