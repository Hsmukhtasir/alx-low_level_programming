#include "main.h"
/**
 * _strlen - returns length of string
 * @s: string
 * Return: strlen
 */
int _strlen(char *s)
{
	int lenght = 0;

	while (s[lenght] != '\0')
	{
		lenght++;
	}

	return (lenght);
}
