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
	int n, m, k, comma, space, l;

	comma = (char) ',';
	space = (char) ' ';
	l = (char) '\n';
	k = 47;

	while (k <= 55)
	{
		k++;
		n = k + 1;
		while (n <= 56)
		{
			m = n + 1;
			while (m <= 57)
			{
				putchar(k);
				putchar(n);
				putchar(m);
				if (n == 56 && m == 57)
					break;
				putchar(comma);
				putchar(space);
				m++;
			}
		}
	}
	putchar(l);
	return (0);
}
