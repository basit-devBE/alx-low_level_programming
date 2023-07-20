#include "main.h"
#include <stdio.h>

int _isupper(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else if (c >= 65 && c <= 90)
{
return (0);
}
else
{
printf("\nerror\n");
}
}


int main()
{
int c;
c = _isupper('c');
printf("%d\n", c);
return (0);
}
