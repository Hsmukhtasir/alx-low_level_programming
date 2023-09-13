#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Printing Alphabet in Lower case
 */

void print_alphabet(void)
{
	char n, l;

	l = '\n';
	for (n = 'a'; n <= 'z'; n++)
		{
		_putchar(n);
		}
		_putchar(l);
}
