#include <stdio.h>
#include "main.h"
/**
 * print_sign - prints the sign of a number
 *
 * @n: input
 *
 * Return: (1) if n > 0  and (0) if n == 0 and (-1) if n < 0
 */

int print_sign(int n)
{
	char l;

	l = '\n';
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
	_putchar(l);
}
