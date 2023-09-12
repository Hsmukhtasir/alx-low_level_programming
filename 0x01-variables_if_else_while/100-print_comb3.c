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
	int n, m, comma, space,;

	comma = (char) ',';
	space = (char) ' ';
	/*l = (char) '\n';*/
	n = -1;

	while (n <= 8)
	{
		n++;
		while (m <= 9)
		{
			m = n + 1;
			putchar(n);
			putchar(m);
			putchar(comma);
			putchar(space);
			m++;
		}
	}
		return (0);
}
