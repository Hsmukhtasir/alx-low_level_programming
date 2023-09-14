#include <stdio.h>
#include "main.h"
/**
 * _islower - checks for lowercase character.
 *
 * @c: input
 *
 * Return: (1) if lower and (0) if not
 */

int _islower(int c)
{
	char l;

	l = '\n';
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
	_putchar(l);
}
