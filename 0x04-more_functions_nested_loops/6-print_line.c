#include "main.h"
#include <stdio.h>

/**
 * print_line - prints a line
 * Description: Draws a line
 * @n: Number of times the character _ should be printed.
 * Return: 0 (alway suces)
 */
void print_line(int n)
{
int i;

if (n <= 0)
{
putchar('\n');
}
else
{
for (i = 1; i <= n; i++)
{
putchar('_');
}
putchar('\n');
}
}
