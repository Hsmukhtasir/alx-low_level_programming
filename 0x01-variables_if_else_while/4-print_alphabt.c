#include <stdio.h>
#include <string.h>
/**
 * main - Entry Point
 *
 * Description: Printing Alphabet in Lower case
 *
 * Return: (0) Always Success!
 */

int main(void)
{
	char n, l;

	l = '\n';
	for (n = 'a'; n <= 'z'; n++)
	{
		if (n == 'q' || n == 'e')
			continue;
		putchar(n);
	}
		putchar(l);
	return (0);
}
