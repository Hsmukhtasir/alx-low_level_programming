#include <stdio.h>
#include "main.h"
#include <unistd.h>
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
	int lst;

	l = '\n';
	if (n >= 10)
	{
		lst = n % 10;
	}
	else if (n < 0)
	{
		n = n * -1;
		lst = n % 10;
	}
	_putchar('0' + lst);
	return (lst);
	_putchar(l);
}
