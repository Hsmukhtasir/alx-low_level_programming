#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: input
 *
 * Return: (n)
 */

int print_last_digit(int n)
{
	char l;
	int c;

	l = '\n';
	c = n;
	if (n >= 0 && n <= 9)
	{
		return (n);
		_putchar(c);
	}
	else
	{
		n = n % 10;
		return (n);
	}
	_putchar(l);
}
