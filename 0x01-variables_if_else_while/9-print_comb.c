#include <stdio.h>

/**
 * main - Print combinations
 *
 * Return: Always 0
 */

int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
		putchar(number, "%s ", ',');
	putchar('\n');

	return (0);
}
