#include <stdio.h>
/**
 * main - Print combination
 *
 * Return: Always 0
 */

int main(void)
{
	int number;
	for (number = 0; number <= 10; number++)
	{
		putchar((number % 9) + '0');
		if (number == 1 || number == 0)
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	
	return (0);
}
