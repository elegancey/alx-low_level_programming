#include <stdio.h>
/**
 * main - Print single decimals
 *
 * Return: Always 0
 */
int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
		printf("%d\n", number);

	return (0);
}
