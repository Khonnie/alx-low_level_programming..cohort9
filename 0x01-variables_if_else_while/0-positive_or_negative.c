#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - point of entry
 * Return : 0
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n>0)
	{
	printf("is positive:%d\n", n);
	}
	if(n == 0)
	{
	printf("is zero:%d\n", n);
	}
	if(n < 0)
	{
	printf("is negative:%d\n", n);
	}
	return (0);
}
