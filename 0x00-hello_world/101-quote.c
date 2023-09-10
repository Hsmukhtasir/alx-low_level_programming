#include <stdio.h>

/**
 *main - Write a C program that prints exactly "and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.
 *
 * Return: (1)
 */
int main(void)
{
	fwrite(1,"and that piece of art is usefu\" - Dora Korpar, 2015-10-19",58);
	fwrite(1,"\n",1);
	return (1);
}
