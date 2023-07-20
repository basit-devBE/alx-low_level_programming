#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints the numbers
 * Description: Prints numbers except 2 and 4
 * Return: 0(always sucess)
 */

void print_most_numbers(void)
{
char num;
for (num = 48; num <= 57; num++)
{
if (num != 50 && num != 52)
{
putchar(num);
}
}
putchar('\n');
}
