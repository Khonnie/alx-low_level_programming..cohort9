#include "main.h"
/**
 * print_number - Function that prints an integer.
 * @n: int type number
 * Description: Can only use _putchar to print.
 */
void print_number(int n)
{
 /* power of 10 */
long m;
 /* boolean check */
int c;
/* convert int to long */
long num;
/* negatives */
num = n;
if (num < 0)
{
num *= -1;
_putchar('-');
}
/* count up */
m = 1;
c = 1;
while (c)
{
if (num / (m * 10) > 0)
m *= 10;
else
c = 0;
}
/* count down */
while (num >= 0)
{
if (m == 1)
{
_putchar(num % 10 + '0');
num = -1;
}
else
{
_putchar((num / m % 10) + '0');
m /= 10;
}
}
}
