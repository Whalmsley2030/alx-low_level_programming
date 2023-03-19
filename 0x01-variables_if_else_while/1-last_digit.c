#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'get the last digit of a number'
 * Return: always 0
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	{
		printf("Last digit of %d and %d is greater than 5\n", n, ld);
	}
	else if (ld > 5)
	{
		printf("Last digit of %d and %d is 0\n", n, ld);
	}
	else
	{
		printf("Last digit of %d and %d and less than 6 and 0\n", n, ld);
	}
	return (0);
}
