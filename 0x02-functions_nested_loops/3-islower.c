#include "main.h"
/**
* _islower - Check for lowercase character
*Return 1 or 0
* @c: the character to be checked
*
*/

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
