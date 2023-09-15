#include <stdio.h>
#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 *
 * @n: input
 *
 * Return: (0)
 */

int _abs(int n)
{
	char l;

	l = '\n';
	if (n >= 0)
		return (n);
	else if (n < 0)
	{
		n = n * (-1);
		return (n);
	}
	_putchar(l);
}
