#include <stdio.h>
#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 *
 * @c: input
 *
 * Return: (0)
 */

int _abs(int c)
{
	char l;
	int n;

	l = '\n';
	n = (c  * (-1));
	_putchar(n);
	_putchar(l);
}
