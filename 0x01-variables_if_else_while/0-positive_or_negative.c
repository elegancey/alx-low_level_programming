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
	int n;

	n = 0;	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("The number is positive\n");
	}
	else if (n == 0)
	{
		printf("The number is zero\n");
	}
	else 
	{
		printf("The number is negative\n");
	}
	/* your code goes there */
	return (0);
}
