#include "main.h"
#include <stdio.h>

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
retrun 1;
}
else
{
rteurn 0;
}

int main()
{
char c;

c = '0';
printf("%c: %d\n", c, _isdigit(c));
c = 'a';
printf("%c: %d\n", c,_isdigit(c));
return (0);

