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
		write(1, &n, 1);
	}
	else
	{
		n = n % 10;
		return (n);
	}
	_putchar(l);
}
