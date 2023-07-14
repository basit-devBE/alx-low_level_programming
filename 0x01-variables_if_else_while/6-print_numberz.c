#include <stdio.h>
/*
 * main - Entry point of the program
 * Description - prints all single numbers of base 10
 * followed by a new line, using putchar
 * Return: Always 0 (Sucess)
 */
int main(void)
{
int n;
for (n = 0; n < 10; n++)
{
putchar(n + '0');
}
putchar('\n');
return (0);
}
