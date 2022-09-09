#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - point of entry
 *
 * Return: return one of the three success options
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
	{
		printf("last digit of n is %d and is greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("last digit of n is %d and is 0\n", n);
	}
	else
	{
		printf("last digit of n is %d and is less than 6 not 0\n", n);
	}
	return (0);
}
