#include <stdio.h>
/**
 * fizz_buzz - function to test the integers
 * main - entry point of the program
 * Description: prints numbers from 1 to 100
 * and checks for fizz, buzz and fizzbuzz
 * @i: number to be checked
 * Return: 0(always sucess)
 */
void fizz_buzz(int i)
{
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz ");
}
else if (i % 3 == 0)
{
printf("Fizz ");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", i);
}
}
}

int main(void)
{
int i = 0;
fizz_buzz(i);
return (0);
}
