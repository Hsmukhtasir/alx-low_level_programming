#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description:Check The last digit of n!
 *
 * Return: (0) Always success
 */

int main(void)
{
	int n, mod;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	mod = n % 10;
	if (mod > 5)
		printf("Last digit of %d is %d and is greater than 5", n, mod);
	else if (mod < 6 && mod != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, mod);
	else
		printf("Last digit of %d is %d and is 0", n, mod);
	return (0);
}

