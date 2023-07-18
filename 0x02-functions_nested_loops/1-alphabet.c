#include "main.h"
#include <stdio.h>

/* Function prototype */
void print_alphabet(void);

/**
*print_alphabet - prints lowercase alphabets
*/

int main(void)
{
print_alphabet();
return 0;
}

void print_alphabet(void)
{
char la;

for (la = 'a'; la <= 'z'; la++)
putchar(la);

putchar('\n');
}
