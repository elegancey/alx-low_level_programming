#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - prints the alphabet in lowercase with new line
 *
 * Return: Nothing
 *
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
	_putchar('\n');
	}
}
