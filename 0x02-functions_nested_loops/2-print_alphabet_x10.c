#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Printing Alphabet in Lower case 10 times
 */

void print_alphabet_x10(void)
{
	char n, l,;
	int x;

	l = '\n';
	x = 0;
	while (x <= 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
			_putchar(l);
			x++;
	}
}
