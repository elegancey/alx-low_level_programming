#include <stdio.h>
/**
 * main - Print lower and uppercase letters
 *
 * Return: Always 0
 */
int main(void)
{
	char letter;

		for (letter = "a"; letter <= "z"; letter++)
			putchar(letter);

		for (letter = "A"; letter <= "Z"; letter++)
			putchar(upper);

		putchar('\n');

		return(0);
}
