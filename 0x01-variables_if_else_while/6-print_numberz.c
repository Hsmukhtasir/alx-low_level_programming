#include <stdio.h>
#include <string.h>
/**
 * main - Entry Point
 *
 * Description: Printing All Numbers of base 10
 *
 * Return: (0) Always Success!
 */

int main(void)
{
	int n, l;

	l = (char) '\n';
	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
		putchar(l);
	return (0);
}
