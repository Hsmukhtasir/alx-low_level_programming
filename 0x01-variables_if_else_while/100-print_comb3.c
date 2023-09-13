#include <stdio.h>
#include <string.h>
/**
 * main - Entry Point
 *
 * Description: Printing Numbers in a specific way
 *
 * Return: (0) Always Success!
 */

int main(void)
{
	int n, m, comma, space, l;

	comma = (char) ',';
	space = (char) ' ';
	l = (char) '\n';
	n = 47;

	while (n <= 56)
	{
		n++;
		m = n + 1;
		while (m <= 57)
		{
			putchar(n);
			putchar(m);
			if (n == 56 && m == 57)
				break;
			putchar(comma);
			putchar(space);
			m++;
		}
	}
	putchar(l);
	return (0);
}
