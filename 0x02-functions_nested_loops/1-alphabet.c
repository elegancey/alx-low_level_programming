#include "main.h"
#include <stdio.h>
/**
 * main - Print lowercase
 *
 * Return: Always (0)
 */
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
		putchar(n);
	putchar('\n');

	return (0);
}
