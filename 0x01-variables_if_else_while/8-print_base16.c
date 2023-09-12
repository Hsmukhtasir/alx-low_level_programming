#include <stdio.h>
#include <string.h>
/**
 * main - Entry Point
 *
 * Description: Printing all the numbers of base 16 in lowercase
 *
 * Return: (0) Always Success!
 */

int main(void)
{
	char n, l, m;

	l = '\n';
	for (m = '0'; m <= '9'; m++)
	{
		putchar(m);
	}
	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}
		putchar(l);
	return (0);
}
