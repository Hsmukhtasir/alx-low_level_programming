#include <stdio.h>
#include "main.h"
/**
 * _isalpha - checks for lowercase or uppercase character.
 *
 * @c: input
 *
 * Return: (1) if letter and (0) if not
 */

int _isalpha(int c)
{
	char l;

	l = '\n';
	if (c >= 97 && c <= 122 || c >= 65 && c <= 90)
		return (1);
	else
		return (0);
	_putchar(l);
}
