#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14,
 * followed by a new line
 * Description: prints set of numbers from 1-14 * 10
 * Return: 0 (always sucess);
 */

void more_numbers(void)
{
int i, j;

for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j >= 10)
{
putchar('1');
}
putchar('0' + (j % 10));
}
putchar('\n');
}
}

