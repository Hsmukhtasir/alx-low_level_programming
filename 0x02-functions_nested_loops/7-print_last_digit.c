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

	l = '\n';
	if (n >= 0 && n <= 9)
	{
		return (n);
		_putchar(n);
	}
	else
	{
		n = n % 10;
		return (n);
	}
	_putchar(l);
}
