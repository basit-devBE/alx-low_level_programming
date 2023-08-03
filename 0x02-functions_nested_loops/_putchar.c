#include <unistd.h>
/*
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * Return: On sucess 1.
 * 0n error , -1 is returned, and errno is set approprately
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
