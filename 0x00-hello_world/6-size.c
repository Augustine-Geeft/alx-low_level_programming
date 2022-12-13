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
printf("Size of a char: %c byte(s)", sizeof(a));
printf("size of an int: %d byte(s)", sizeof(b));
printf("size of a long int: %ld byte(s)", sizeof(c));
printf("size of a long long int: %lld byte(s)", sizeof(d));
printf("size of a float: %f byte(s)", sizeof(e));
return (0);
}
