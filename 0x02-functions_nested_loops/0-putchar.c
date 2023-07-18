#include <unistd.h>

/* Function prototype */
int _putchar(char c);

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
char *sh = "_putchar";

while (*sh)
{
_putchar(*sh);
sh++;
}

_putchar('\n');

return (0);
}

/* _putchar function definition */
int _putchar(char c)
{
return (write(1, &c, 1));
}

