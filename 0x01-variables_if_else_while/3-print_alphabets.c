#include <stdio.h>
#include <string.h>
/**
 * main - Entry Point
 *
 * Description: Printing Alphabet in Lower case and then Uppercase
 *
 * Return: (0) Always Success!
 */

int main(void)
{
	char n, l, N;

	l = '\n';
	for (n = 'a'; n <= 'z'; n++)
		{
			putchar(n);
		}
	for (N = 'A'; N <= 'Z'; N++)
		{
			putchar(N);
		}
			putchar(l);
	return (0);
}
