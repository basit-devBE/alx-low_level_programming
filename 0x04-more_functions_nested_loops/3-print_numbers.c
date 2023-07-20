#include "main.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers from 0-9
 *
 * Description: prints numbers from 0-9
 * Rturn: void
 *
 */

void print_numbers(void)
{
int num;

for (num = 0; num <= 57; num++)
{
putchar(num);
}
putchar('\n');
}
