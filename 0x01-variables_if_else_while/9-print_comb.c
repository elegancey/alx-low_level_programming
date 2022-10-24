#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print combinations
 *
 * Return: Always 0
 */

int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar(num % 10 + '0');
		
		if (num == 9)
			continue;
		
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
