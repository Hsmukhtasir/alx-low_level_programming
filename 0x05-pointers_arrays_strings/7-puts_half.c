#include "main.h"
/**
 * puts_half - prints half of string
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int count = 0, i;

	while (str[count] != '\0')
	{
		count++;
	}

	if (count % 2 == 1)
		i = count / 2;
	else
		i = (count - 1) / 2;

	for (i++; i < count; i++)
		_putchar(str[i]);
	_putchar('\n');
}
