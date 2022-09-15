#include<stdio.h>
/**
* main - prints the numbers from 1 to 100
* 3 multiples print Fizz instead of the number
* 5 multiples print Buzz instead of the number
* 3 & 5 multiples print FizzBuzz instead of the number
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
char var = ' ';
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0)
{
printf("Fizz");
printf("%c", var);
}
else if (i % 5 == 0)
{
printf("Buzz");
printf("%c", var);
}
else if ((i % 3 == 0) && (i % 5 == 0))
{
printf("FizzBuzz");
printf("%c", var);
}
else
{
printf("%d", i);
printf("%c", var);
}
}
printf("\n");
return (0);
}


