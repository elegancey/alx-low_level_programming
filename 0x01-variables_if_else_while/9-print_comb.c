#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print combinations
 *
 * Return: Always 0
 */

int main(void)
{
	int number, lik;
	lik = ", ";

	for (number = '0'; number <= '9'; number++)
		putchar(number);
		putchar(lik);
	putchar('\n');

	return (0);
}
