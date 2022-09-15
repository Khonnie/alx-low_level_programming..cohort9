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
printf("Fizz%c", var);
}
else if (i % 5 == 0)
{
printf("Buzz%c", var);
}
else if ((i % 3 == 0) && (i % 5 == 0))
{
printf("FizzBuzz%c", var);
}
else
{
printf("%d%c", i, var);
}
}
printf("\n");
return (0);
}


