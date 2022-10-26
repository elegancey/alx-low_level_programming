#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Nothing
 *
 */

void print_alphabet_x10(void)
{
	char letter;
	
	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	print_alphabet_x10();
	_putchar('\n');

}
