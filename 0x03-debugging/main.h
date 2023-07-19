#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void positive_or_negative(int i)
{
if (i > 0)
{
printf("\n %d is a positive number\n", i);
}
else if (i <  0)
{
printf("\n %d is a negative integer\n", i);
}
else
{
printf("\n %d is zero\n", i );
}
}

#endif
