#include <stdio.h>
#include <string.h>
/**
 * main - Entry Point
 *
 * Description: Printing All Numbers of base 10 in a specific way
 *
 * Return: (0) Always Success!
 */

int main(void)
{
	int n, comma, space, l;

	space = (char) ' ';
	comma = (char) ',';
	l = (char) '\n';
	for (n = 48; n <= 57; n++)
		{
		putchar(n);
		putchar(comma);
		putchar(space);
		}
		putchar();
	return (0);
}
