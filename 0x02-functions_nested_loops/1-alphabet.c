#include "main.h"
#include <stdio.h>
/**
 * main - Print lowercase
 *
 * Return: Always (0)
 */
void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
		putchar(n);
	putchar('\n');

	return (0);
}
