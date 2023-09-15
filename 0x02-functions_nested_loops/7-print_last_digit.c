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
	int last, l;

	l =(char) '\n';
	last = n % 10;
	if (n < 0)
	{
		last *= -1;
	}
	_putchar(48 + last);
	return (last);
	_putchar(l);
}
