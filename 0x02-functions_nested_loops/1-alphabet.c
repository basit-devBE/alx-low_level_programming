#include "main.h"
#include <stdio.h>

/**
* print_alphabet - prints lowercase alphabets
*/
void print_alphabet(void)
{
char la;

for (la = 'a'; la <= 'z'; la++)
putchar(la);

putchar('\n');
}

int main(void)
{
print_alphabet();
return(0);
}
