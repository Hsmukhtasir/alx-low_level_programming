#include <stdio.h>
#include <unistd.h>

/**
 *main - Write a C program that prints exactly a sentence
 *
 * Return: (1)
 */
int main(void)
{
	fwrite(stderr, "and that piece of art is usefu\" - Dora Korpar, 2015-10-19", 58);
	fwrite(stderr, "\n", 1);
	return (1);
}
