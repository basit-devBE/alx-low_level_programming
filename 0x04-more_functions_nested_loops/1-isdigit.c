#include "main.h"
#include <stdio.h>
/**
 * _isdigit - see if a character is a digit from 1-9
 * Description: search for a digit from 1-9
 * @c: character to be checked
 * Return:1 for yes or 0 for no
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
