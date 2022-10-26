#include "main.h"
/**
 * _isalpha - Checks letters.
 * c: character used
 *
 * Return: 1 if c is a letter, 0 otherwise.
 */
int _isalpha(int c)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
		if (n == c)
			return (1);

	return (0);
}
