#include <stdio.h>

/**
 * main - Print three combinations
 *
 * Return: Always 0
 */

int main(void)
{
	int num1, num2, num3;
	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = num1 +1; num2 < 9; num2++)
		{
			for (num3 = num2 + 1
