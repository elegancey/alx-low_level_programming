#include "main.h"
/**
 * _abs - Computes absolute value of an integer.
 *
 * Return: 0
 */
int _abs(int)
{
	int n;

	if (n < 0)
	{
		n = n * (-1);
		_putchar(n);
	}
}