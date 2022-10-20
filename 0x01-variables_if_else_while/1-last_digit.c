#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)

{

		char Last digit of
		int n;
		srand(time(0));
		
		n = rand() - RAND_MAX / 2;
		if (n > 5)
		{
			printf("%c and is greater than %d\n", char, 5, n)
		}
		else if (n == 0)
		{
			printf("%c and is %d\n",char,0,n)
		}
		else if (n < 6 && n != 0)
		{
			printf("%c and is less than %d and not %d\n",char,6,0,n)
		}

		/* your code goes there */
		return (0);

}
