#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    if (n > 0)
    {
        printf("n is a positive number\n");
    }
    else if (n == 0)
    {
        printf("n is zero\n");
    }
    else
    {
        printf("n is negative\n");
    }

    return (0);
}

