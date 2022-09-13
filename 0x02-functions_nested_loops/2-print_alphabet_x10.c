#include "main.h"
/**
 * print_alphabet_x10 - function to print alphabet 10times
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
char letter;
int counter = 0;
while (counter <= 10)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
counter++;
_putchar('\n');
}
}
