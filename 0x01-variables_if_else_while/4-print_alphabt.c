#include <stdio.h>
/**
 * main - Print with exception
 *
 * Return: Always 0
 */
int main(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'q' && letter == 'e')
			continue;
		else
			putchar(letter);
	}
	putchar('\n');

	return (0);
}
