#include <stdio.h>
#include <string.h>
/**
 * main - Entry Point
 *
 * Description: Printing Alphabet in Lower case
 *
 * Return: (0) Always Success!
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
