#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description:last digit of a randomly generated numbe
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
int lastDigit = abs(n) % 10;
if (n > 5)
{
printf("The last digit of %d is %d and is greater than 5\n", n);
}
else if (n == 0)
{
printf("The last digit of %d is %d and is 0\n", n);
}
else if (n < 6)
{
printf("The last digit of %d is %d and is less than 6 and not 0\n", n);
}
return (0);
}

