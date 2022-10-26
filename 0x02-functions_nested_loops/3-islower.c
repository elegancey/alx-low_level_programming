#include "main.h"
#include <stdio.h>
/**
 * _islower - Checks for lowercase
 * @c - an input character
 * Return: returns 1 if low and 0 otherwise
 */

int _islower(int c)

{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);

}
